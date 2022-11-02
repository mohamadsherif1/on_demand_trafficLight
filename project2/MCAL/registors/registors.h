/*
 * registors.h
 *
 * Created: 10/6/2022 11:53:02 AM
 *  Author: moham
 */ 


#ifndef REGISTORS_H_
#define REGISTORS_H_



typedef unsigned char uint8_t ;
/******************************* PORTA************************/
# define PORTA *((volatile uint8_t*)0X3B)
# define DDRA *((volatile uint8_t*)0X3A)
# define PINA *((volatile uint8_t*)0X39)

/******************************* PORTB************************/
# define PORTB *((volatile uint8_t*)0X38)
# define DDRB *((volatile uint8_t*)0X37)
# define PINB *((volatile uint8_t*)0X36)
/******************************* PORTC************************/
# define PORTC *((volatile uint8_t*)0X35)
# define DDRC *((volatile uint8_t*)0X34)
# define PINC *((volatile uint8_t*)0X33)
/******************************* PORTC************************/
# define PORTD *((volatile uint8_t*)0X32)
# define DDRD *((volatile uint8_t*)0X31)
# define PIND *((volatile uint8_t*)0X30)

/****************************timer0***************************/

# define TCCR0 *((volatile uint8_t*)0X53)
# define TCNT0 *((volatile uint8_t*)0X52)
# define TIFR *((volatile uint8_t*)0X58)




#endif /* REGISTORS_H_ */