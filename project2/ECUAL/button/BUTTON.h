/*
 * BUTTON.h
 *
 * Created: 10/6/2022 3:29:48 PM
 *  Author: moham
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO_DRIVER/DIO.h"


void BUTTON_init (uint8_t pinNumber,uint8_t portNumber);

void BUTTON_read(uint8_t pinNumber,uint8_t portNumber, uint8_t*value_read);





#endif /* BUTTON_H_ */