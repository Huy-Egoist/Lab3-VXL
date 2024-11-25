/*
 * light_traffic.c
 *
 *  Created on: Nov 18, 2024
 *      Author: Admin
 */

#include "light_traffic.h"
#include "global.h"

void INIT_TIME(){
	red_time = 5;
	green_time = 3;
	yellow_time = 2;
}
void red1_green2(){
	setRED1();
	setGREEN2();
}
void red1_yellow2(){
	setRED1();
	setYELLOW2();
}
void green1_red2(){
	setGREEN1();
	setRED2();
}
void yellow1_red2(){
	setYELLOW1();
	setRED2();
}

void blinking_red(){
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
	HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
}
void blinking_green(){
	HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin);
	HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
}
void blinking_yellow(){
	HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin);
}
