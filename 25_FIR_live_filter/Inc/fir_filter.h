#ifndef __fir_filter_h__
#define __fir_filter_h__

#include <stdint.h>
#include "arm_math.h"

#define FIR_FILTER_LEN   10

typedef struct{
	float32_t *buff;
	uint32_t buff_idx;
	float32_t *kernel;
	float32_t out;
	uint32_t kernel_len;
}fir_filter_type ;

void fir_filter_init(fir_filter_type * fir, float32_t *fltr_kernel, uint32_t fltr_kernel_len);
float32_t fir_filter_update(fir_filter_type * fir , float32_t input);

#endif
