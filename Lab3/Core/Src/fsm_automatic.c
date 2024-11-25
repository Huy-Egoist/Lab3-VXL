/*
 * fsm_automatic.c
 *
 *  Created on: Nov 11, 2024
 *      Author: Admin
 */

#include "fsm_automatic.h"
#include "global.h"

void fsm_automatic_run(){
	switch(status){
		case INIT:
			setINIT();
			INIT_TIME();
			status = AUTO_RED1_GREEN2;
			setTimer(1, 1000);
			break;
		case AUTO_RED1_GREEN2:
			red1_green2();
			set7seg2(red_time);
			set7seg4(green_time);
			if(timer_flag[1] == 1){
				red_time --;
				green_time --;
				if(green_time == 0) status = AUTO_RED1_YELLOW2;
				setTimer(1, 1000);
			}
			if(isButtonPressed(1) == 1){
				setINIT();
				status = MAN_RED;
				setTimer(1, 999999);
				setTimer(2, 50);
				setTimer(3, 50);
			}
			break;
		case AUTO_RED1_YELLOW2:
			red1_yellow2();
			set7seg2(red_time);
			set7seg4(yellow_time);
			if(timer_flag[1] == 1){
				red_time --;
				yellow_time --;
				if(yellow_time == 0){
					INIT_TIME();
					status = AUTO_GREEN1_RED2;
				}
				setTimer(1, 1000);
			}
			if(isButtonPressed(1) == 1){
				setINIT();
				status = MAN_RED;
				setTimer(1, 999999);
				setTimer(2, 50);
				setTimer(3, 50);
			}
			break;
		case AUTO_GREEN1_RED2:
			green1_red2();
			set7seg2(green_time);
			set7seg4(red_time);
			if(timer_flag[1] == 1){
				green_time --;
				red_time --;
				if(green_time == 0) status = AUTO_YELLOW1_RED2;
				setTimer(1, 1000);
			}
			if(isButtonPressed(1) == 1){
				setINIT();
				status = MAN_RED;
				setTimer(1, 999999);
				setTimer(2, 50);
				setTimer(3, 50);
			}
			break;
		case AUTO_YELLOW1_RED2:
			yellow1_red2();
			set7seg2(yellow_time);
			set7seg4(red_time);
			if(timer_flag[1] == 1){
				yellow_time --;
				red_time --;
				if(yellow_time == 0){
					INIT_TIME();
					status = AUTO_RED1_GREEN2;
				}
				setTimer(1, 1000);
			}
			if(isButtonPressed(1) == 1){
				setINIT();
				status = MAN_RED;
				setTimer(1, 999999);
				setTimer(2, 50);
				setTimer(3, 50);
			}
			break;
		default:
			break;
	}
}
