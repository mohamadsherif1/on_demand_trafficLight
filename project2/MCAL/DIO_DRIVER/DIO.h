/*
 * DIO.h
 *
 * Created: 10/6/2022 11:45:53 AM
 *  Author: mohamed
 */ 


# ifndef  DIO_H_
#define  DIO_H_

#include "../registors/registors.h"


#define IN 0
#define OUT 1

#define HIGH 1
#define LOW 0

void DIO_init(uint8_t pinNumber,uint8_t portNumber, uint8_t direction);

void DIO_write(uint8_t pinNumber,uint8_t portNumber, uint8_t value);

void DIO_toggle(uint8_t pinNumber,uint8_t portNumber);

void DIO_read(uint8_t pinNumber,uint8_t portNumber, uint8_t *value);


#endif