/*
 * Application.h
 *
 * Created: 10/23/2022 12:18:20 PM
 *  Author: moham
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_


int LED_NUM = 0;
int counter=0;
int flag = 0;
int ped_num= 0;
int count1 = 0;
int red_state =0 ;
int yellow_state=0 ;
int green_state =0;
int press = 1;


# define RED_CAR 0
# define YELLOW_CAR 3
# define GREEN_CAR 7

# define RED_PED 0
# define YELLOW_PED 1
# define GREEN_PED 2

#define cars_port 'A'

#define ped_port 'B'



#endif /* APPLICATION_H_ */