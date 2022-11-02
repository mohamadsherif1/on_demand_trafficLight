/*
 * TIMER0.c
 *
 * Created: 10/23/2022 12:09:36 PM
 *  Author: moham
 */ 
#include "TIMER0.h"

void timer0_init(void){
	
	  TCCR0 =00  ;
	  
	  TCNT0 = 0x00; // initial value
	  
	  sei(); // GLOBAL ENABLE INTERRUPTS
	  
	  MCUCR |= (1<<ISC00) | (1<<ISC01); // HIGH EDGE INTERRUPT
	  
	  GICR |= (1<<INT0); // ENABLE INTERRUPTS
	  
	  TIMSK |= (1<<1); // ENABLE INTERRUPT FOR COUNTERS
	  
	  
	  TCCR0 |= (1<<0) | (1<<2);  // enabling timer0
}