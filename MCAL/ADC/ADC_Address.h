/*
 * ADC_Address.h
 *
 * Created: 3/12/2022 6:07:09 PM
 *  Author: youssef samy 
 */ 


#ifndef ADC_ADDRESS_H_
#define ADC_ADDRESS_H_
/*
#define ADCL     (*(volatile uint8_t*)(0x24))
#define ADCH     (*(volatile uint8_t*)(0x25))
#define ADMUX    (*(volatile uint8_t*)(0x27))
#define ADCSRA   (*(volatile uint8_t*)(0x26))
*/
#define ADC_VAL  (*(volatile uint16_t*)(0x24))


#endif /* ADC_ADDRESS_H_ */