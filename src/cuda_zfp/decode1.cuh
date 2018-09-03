#ifndef CUZFP_DECODE1_CUH
#define CUZFP_DECODE1_CUH

#include "shared.h"
#include "type_info.cuh"

namespace cuZFP {


template<typename Scalar> 
__device__ __host__ inline 
void scatter_partial1(const Scalar* q, Scalar* p, int nx, int sx)
{
  printf("scatter partial %d\n", nx);
  uint x;
  for (x = 0; x < nx; x++, p += sx)
   *p = *q++;
}

template<typename Scalar> 
__device__ __host__ inline 
void scatter1(const Scalar* q, Scalar* p, int sx)
{
  uint x;
  for (x = 0; x < 4; x++, p += sx)
    *p = *q++;
}

template<class Scalar>
__global__
void
cudaDecode1(Word *blocks,
            Scalar *out,
            const uint dim,
            const uint padded_dim,
            const uint total_blocks,
            uint maxbits)
{
  typedef unsigned long long int ull;
  typedef typename zfp_traits<Scalar>::UInt UInt;
  typedef typename zfp_traits<Scalar>::Int Int;

  const int intprec = get_precision<Scalar>();

  const ull blockId = blockIdx.x +
                      blockIdx.y * gridDim.x +
                      gridDim.x * gridDim.y * blockIdx.z;

  // each thread gets a block so the block index is 
  // the global thread index
  const ull block_idx = blockId * blockDim.x + threadIdx.x;

  if(block_idx >= total_blocks) return;
  printf("total blocks %d\n", (int) total_blocks);
  BlockReader<4> reader(blocks, maxbits, block_idx, total_blocks);
  Scalar result[4] = {0,0,0,0};

  uint s_cont = 1;
  //
  // there is no skip path for integers so just continue
  //
  if(!is_int<Scalar>())
  {
    s_cont = reader.read_bit();
  }

  if(s_cont)
  {
    uint ebits = get_ebits<Scalar>() + 1;

    uint emax;
    if(!is_int<Scalar>())
    {
      // read in the shared exponent
      emax = reader.read_bits(ebits - 1) - get_ebias<Scalar>();
    }
    else
    {
      // no exponent bits
      ebits = 0;
    }

    const uint vals_per_block = 4;
	  maxbits -= ebits;
    
    UInt ublock[vals_per_block];

    decode_ints<Scalar, 4, UInt>(reader, maxbits, ublock);

    Int iblock[4];
    #pragma unroll 4
    for(int i = 0; i < 4; ++i)
    {
		  iblock[i] = uint2int(ublock[i]);
    }

    inv_lift<Int,1>(iblock);

    //for(int i = 0; i < 4; ++i)
    //{
    //  printf("iblock %d %lld\n", i, iblock[i]);
    //}

		Scalar inv_w = dequantize<Int, Scalar>(1, emax);
    //if(inv_w == 0.) printf("ZERO\n");
    //printf("inv fact %a emax %d\n", inv_w, emax); 
    #pragma unroll 4
    for(int i = 0; i < 4; ++i)
    {
		  result[i] = inv_w * (Scalar)iblock[i];
    }
     
  }

  uint block;
  block = block_idx * 4ull; 
  uint sx = 1;
  uint offset = block * sx; 
  
  for(int i = 0; i < 4; ++i)
  {
    printf("%d result %f\n", i, result[i]);
  }
  printf("Outputblock offset %d index %d\n", offset, (int) block_idx);
  bool partial = false;
  if(block + 4 > dim) partial = true;
  if(partial)
  {
    const uint nx = 4u - (padded_dim - dim);
    scatter_partial1(result, out + offset, nx, sx);
  }
  else
  {
    scatter1(result, out + offset, sx);
  }
}
template<class Scalar>
void decode1launch(uint dim, 
                   Word *stream,
                   Scalar *d_data,
                   uint maxbits)
{
  const int cuda_block_size = 128;

  uint zfp_pad(dim); 
  if(zfp_pad % 4 != 0) zfp_pad += 4 - dim % 4;

  uint zfp_blocks = (zfp_pad) / 4; 

  if(dim % 4 != 0)  zfp_blocks = (dim + (4 - dim % 4)) / 4;

  int block_pad = 0;
  if(zfp_blocks % cuda_block_size != 0) 
  {
    block_pad = cuda_block_size - zfp_blocks % cuda_block_size; 
  }

  dim3 block_size = dim3(cuda_block_size, 1, 1);

  size_t total_blocks = block_pad + zfp_blocks;

  dim3 grid_size = calculate_grid_size(total_blocks, cuda_block_size);

  // setup some timing code
  cudaEvent_t start, stop;
  cudaEventCreate(&start);
  cudaEventCreate(&stop);

  cudaEventRecord(start);

  cudaDecode1<Scalar> << < grid_size, block_size >> >
    (stream,
		 d_data,
     dim,
     zfp_pad,
     zfp_blocks, // total blocks to decode
     maxbits);

  cudaEventRecord(stop);
  cudaEventSynchronize(stop);
	cudaStreamSynchronize(0);

  float miliseconds = 0;
  cudaEventElapsedTime(&miliseconds, start, stop);
  float seconds = miliseconds / 1000.f;
  printf("Decode elapsed time: %.5f (s)\n", seconds);
  float rate = (float(dim) * sizeof(Scalar) ) / seconds;
  rate /= 1024.f;
  rate /= 1024.f;
  printf("# decode1 rate: %.2f (MB / sec) %d\n", rate, maxbits);
}

template<class Scalar>
void decode1(int dim, 
             Word *stream,
             Scalar *d_data,
             uint maxbits)
{
	decode1launch<Scalar>(dim, stream, d_data, maxbits);
}

} // namespace cuZFP

#endif
