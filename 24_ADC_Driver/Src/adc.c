#include "adc.h"

#define GPIOAEN    (1U<<0)
#define ADC1EN     (1U<<8)
#define CR2_ADCON  (1U<<0)
#define CR2_CONT   (1U<<1)
#define CR2_SWSTART (1U<<30)
#define SR_EOC      (1U<<1)

void pa1_adc_init(void){

	/* configuring the adc gpio pin */
	// list of step for configuring the adc gpio pin

	// 1 enable clock access to gpioa
	RCC->AHB1ENR |= GPIOAEN;
	// 2 set pa1 mode to analog mode
	GPIOA-> MODER |= (1U<<2);
	GPIOA-> MODER |= (1U<<3);

	/*configuring adc module */
	// list of step for configuring adc module

	// 1 enable clock access to the adc module
	RCC->APB2ENR |= ADC1EN;
	// 2 set start of conversion sequence
	ADC1-> SQR3 = (1U<<0);
	// 3 set conversion sequence lenght
	ADC1->SQR1 = 0X00 ;// single conversion
	/* enabe adc module */
	ADC1->CR2 |= CR2_ADCON;
}

void start_conversion(void){

	// enable continuos conversion
	ADC1->CR2 |= CR2_CONT;

	// start adc conversion
	ADC1->CR2 |= CR2_SWSTART;
}

uint32_t adc_read(void){

	// wait for conversion to be completed
	while(!(ADC1->SR & SR_EOC)){}
	//read converted result

	return (ADC1->DR);
}



