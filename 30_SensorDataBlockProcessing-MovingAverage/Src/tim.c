#include "tim.h"

#define TIM2EN    (1U<<0)
#define CR1_CEN   (1U<<0)
#define DIER_UIE   (1U<<0)
// APB1 clock = 50Mhz after clock tree update
void tim2_1khz_interrupt_init(void){

	// enable clock acess to TIM2 register
	RCC->APB1ENR |= TIM2EN;

	// set the prescaler value
	TIM2->PSC = 10000 - 1;     ///100 000 000/ 10 000= 10000
	// set auto-reload value
	TIM2->ARR = 10 - 1;// 10000/10 = 1000
	// clear counter
	TIM2->CNT  = 0;
	// enable timer
	TIM2->CR1 = CR1_CEN;

	// enable timer interrupt
	TIM2->DIER |= DIER_UIE;
	// enable timer interrupt in NVIC
	NVIC_EnableIRQ(TIM2_IRQn);

}
