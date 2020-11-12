
#ifndef NVIXNU__REDUCTION_H_
#define NVIXNU__REDUCTION_H_

/**
* Kernel that sums elements of an array in a coalesced way (reduce the divergence in a warp)
* @param v The input array
* @param sum The array with the partial sums values (Sums of each block).
* @param length The input array length
*/
__global__ void nvixnu__sum_by_block(double *v, double *sum, const int length);

/**
* Kernel that sums elements of an array in a interleaved way (Didatic purpose once it has multiple divergences per warp)
* @param v The input array
* @param sum The array with the partial sums values (Sums of each block).
* @param length The input array length
*/
__global__ void nvixnu__sum_by_block_interleaved(double *v, double *sum, const int length);


/**
* Host function that performs sum reduction
* @param v The input array
* @param length The input array length
*/
double nvixnu__h_sum(double *v, const int length);

#endif /* NVIXNU__REDUCTION_H_ */