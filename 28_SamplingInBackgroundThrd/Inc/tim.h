#ifndef __TIM_H__
#define __TIM_H__

#include "stm32f4xx.h"

#define SR_UIF    (1U<<0)
void tim2_1khz_interrupt_init(void);


#endif
