/*
 * LED.c
 *
 * Created: 10/6/2022 11:51:31 AM
 *  Author: moham
 */ 
#include "LED.h"

void LED_init(uint8_t pinNumber,uint8_t portNumber){
	
	DIO_init(pinNumber,portNumber,OUT);
}

void LED_ON(uint8_t pinNumber,uint8_t portNumber){
	
	DIO_write(pinNumber,portNumber,HIGH);
}

void LED_OFF(uint8_t pinNumber,uint8_t portNumber){
	
	DIO_write(pinNumber,portNumber,LOW);
}

void LED_toggle(uint8_t pinNumber,uint8_t portNumber){
	
	DIO_toggle(pinNumber,portNumber);
}