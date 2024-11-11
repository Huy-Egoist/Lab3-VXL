/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status1){
		case MAN_RED:
			setRED1();

			if(timer1_flag == 1){
				status1 = AUTO_RED;
				setTimer1(500);
			}
			if(isButton1Pressed() == 1){
				status1 = MAN_GREEN;
				setTimer1(1000);
			}
			break;
		case MAN_GREEN:
			setGREEN1();

			if(timer1_flag == 1){
				status1 = AUTO_GREEN;
				setTimer1(500);
			}
			if(isButton1Pressed() == 1){
				status1 = MAN_YELLOW;
				setTimer1(1000);
			}
			break;
		case MAN_YELLOW:
			setYELLOW1();

			if(timer1_flag == 1){
				status1 = AUTO_YELLOW;
				setTimer1(500);
			}
			if(isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(1000);
			}
			break;
		default:
			break;
	}
}

