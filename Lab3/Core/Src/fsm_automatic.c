/*
 * fsm_automatic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Admin
 */

#include "fsm_automatic.h"

void fsm_automatic_run1(){
	switch(status1){
		case INIT:
			setINIT();

			status1 = AUTO_RED;
			setTimer1(500);
			break;
		case AUTO_RED:
			setRED1();

			if(timer1_flag == 1){
				status1 = AUTO_GREEN;
				setTimer1(300);
			}
			if(isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(1000);
			}
			break;
		case AUTO_GREEN:
			setGREEN1();

			if(timer1_flag == 1){
				status1 = AUTO_YELLOW;
				setTimer1(200);
			}
			break;
		case AUTO_YELLOW:
			setYELLOW1();

			if(timer1_flag == 1){
				status1 = AUTO_RED;
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}

void fsm_automatic_run2(){
	switch(status2){
		case INIT:
			setINIT();

			status2 = AUTO_GREEN;
			setTimer2(300);
			break;
		case AUTO_RED:
			setRED2();

			if(timer2_flag == 1){
				status2 = AUTO_GREEN;
				setTimer2(300);
			}
			break;
		case AUTO_GREEN:
			setGREEN2();

			if(timer2_flag == 1){
				status2 = AUTO_YELLOW;
				setTimer2(200);
			}
			break;
		case AUTO_YELLOW:
			setYELLOW2();

			if(timer2_flag == 1){
				status2 = AUTO_RED;
				setTimer2(500);
			}
			break;
		default:
			break;
	}
}
