/*
 * CFile1.c
 *
 * Created: 10/15/2022 11:43:18 AM
 *  Author: moham
 */ 

/*
 * project2.c
 *
 * Created: 10/6/2022 11:42:39 AM
 * Author : moham
 */ 

//#include "../../ECUAL/button/BUTTON.h"

#include "../ECUAL/LED/LED.h"
#include "../ECUAL/button/BUTTON.h"
#include "../MCAL/TIMER0/TIMER0.h"
#include "Application.h"


//#include <avr/interrupt.h>


int main(void)
{

  
   BUTTON_init(2,'D');  // INIT OF PUSH  BUTTON
   
   LED_init(RED_CAR,cars_port); // INITIAL TO CARS RED LED
   LED_init(YELLOW_CAR,cars_port); // INITIAL TO CARS YELLOW LED
   
   LED_init(GREEN_CAR,cars_port); // INITIAL TO CARS GREEN LED
   
   LED_init(RED_PED,ped_port); // RED PED
   LED_init(YELLOW_PED,ped_port); // YELLOW PED
   LED_init(GREEN_PED,ped_port); // GREEN PED
   
   
  /***************************** COUNTERS INIT ********************************************/

  
  
 
  while (1)
  {
	  
	  
	  /****NORMAL MODE ****/
	  if (flag ==0)
	  {
	  
	  switch(LED_NUM){
		  
		  case 0:
		  LED_OFF(RED_CAR,cars_port);  
		  LED_OFF(YELLOW_CAR,cars_port);
		  LED_OFF(GREEN_CAR,cars_port);
		  
		 
		  break;
		  case 1:
		  LED_ON(RED_PED,cars_port);
		  LED_OFF(YELLOW_CAR,cars_port);
		  LED_OFF(GREEN_CAR,cars_port);
		  
		   LED_ON(RED_PED,ped_port);
		   LED_OFF(YELLOW_PED,ped_port);
		   LED_OFF(GREEN_PED,ped_port);
		   
		  
		  break;
		  case 2:
		  LED_OFF(RED_PED,cars_port);
		  LED_ON(YELLOW_CAR,cars_port);
		  LED_OFF(GREEN_CAR,cars_port);
		  break;
		  case 3:
		  LED_OFF(RED_CAR,cars_port);
		  LED_OFF(YELLOW_CAR,cars_port);
		  LED_ON(GREEN_CAR,cars_port);
		  break;
		  default:
		  break;
	  }
	  
	  }
	  
	  /*************** ped state ***************/
	  
	  if (flag == 1)
	  {
		
		if (red_state == 1)
		{
			switch(ped_num){
				case 0:
				press = 0;
				LED_ON(RED_CAR,cars_port);
				LED_OFF(YELLOW_CAR,cars_port);
				LED_OFF(GREEN_CAR,cars_port);
				
				LED_OFF(RED_PED,ped_port);
				LED_ON(GREEN_PED,ped_port);
				
				
				break;
				case 1 :
					press = 0;
				LED_OFF(RED_CAR,cars_port);
				LED_ON(YELLOW_CAR,cars_port);
				LED_OFF(GREEN_CAR,cars_port);
				
				LED_OFF(RED_PED,ped_port);
				
				LED_ON(YELLOW_PED,ped_port);
				
				LED_ON(GREEN_PED,ped_port);
				
				break;
				case 2:
					press = 0;
				LED_OFF(RED_CAR,cars_port);
				LED_OFF(YELLOW_CAR,cars_port);
				LED_ON(GREEN_CAR,cars_port);
				
				LED_ON(RED_PED,ped_port);
				LED_OFF(YELLOW_PED,ped_port);
				LED_OFF(GREEN_PED,ped_port);
				break;
				
				case 3:
				flag = 0;
				red_state = 0;
				count1 = 0;
				counter = 0;
				LED_NUM = 1;
				ped_num = 0;
				press = 1;
				break;
				
			}	
			
			
			}
			
			
			
					if (green_state == 1 || yellow_state == 1)
					{
						switch(ped_num){
							case 0:
							press = 0;
							LED_ON(YELLOW_CAR,cars_port);
							
							LED_ON(RED_PED,ped_port);
							LED_ON(YELLOW_PED,ped_port);
							LED_OFF(GREEN_PED,ped_port);
							break;
							case 1:
								press = 0;
							LED_ON(RED_CAR,cars_port);
							LED_OFF(YELLOW_CAR,cars_port);
							LED_OFF(GREEN_CAR,cars_port);
								press = 0;
							LED_OFF(RED_PED,ped_port);
							LED_OFF(YELLOW_PED,ped_port);
							LED_ON(GREEN_PED,ped_port);
							break;
							case 2:
								press = 0;
							LED_OFF(RED_CAR,cars_port);
							LED_ON(YELLOW_CAR,cars_port);
							LED_OFF(GREEN_CAR,cars_port);
							
							LED_OFF(RED_PED,ped_port);
							LED_ON(YELLOW_PED,ped_port);
							LED_ON(GREEN_PED,ped_port);
							
							break;
							case 3:
							flag = 0;
							red_state = 0;
							count1 = 0;
							counter = 0;
							LED_NUM = 1;
							ped_num = 0;
							press = 1;
							break;
							
						}
						
						
	
					}
					
					
	  
			
		}
			
			
		}
		


  }



ISR(INT0_vect){
	if(press == 1){
	flag = 1;
	}
	DIO_read(RED_CAR,cars_port,&red_state);
	
	if (red_state !=1)
	{
		yellow_state = 1;
		green_state =1;
	}
	

}


ISR(TIMER0_COMP_vect){
	if (flag== 0){
		
	counter ++;
	if (counter%20 == 0 )
	{
		LED_NUM ++;
	}
	if (LED_NUM>3)
	{
		LED_NUM = 1;
	}
	}
	
	if(flag == 1){
		
		count1 ++;
		if (count1 %20 == 0)
		{
			ped_num++;
		}if(ped_num >3)
		{
			ped_num =0;
		}
	}
	
	}


