/*
 * LED.h
 *
 * Created: 10/6/2022 11:51:20 AM
 *  Author: moham
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO_DRIVER/DIO.h"

void LED_init(uint8_t pinNumber,uint8_t portNumber);

void LED_ON(uint8_t pinNumber,uint8_t portNumber);

void LED_OFF(uint8_t pinNumber,uint8_t portNumber);

void LED_toggle(uint8_t pinNumber,uint8_t portNumber);


#endif /* LED_H_ */