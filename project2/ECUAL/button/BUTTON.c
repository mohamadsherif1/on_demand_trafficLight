/*
 * BUTTON.c
 *
 * Created: 10/6/2022 3:30:03 PM
 *  Author: moham
 */ 

#include "BUTTON.h"
void BUTTON_init (uint8_t pinNumber,uint8_t portNumber){
	
	DIO_init(pinNumber,portNumber,IN);
	
}



void BUTTON_read(uint8_t pinNumber,uint8_t portNumber, uint8_t*value_read){
	
	DIO_read(pinNumber,portNumber,value_read);
	
	
}



