/*
 * fsm_setting.c
 *
 *  Created on: Nov 15, 2024
 *      Author: Admin
 */

#include "fsm_setting.h"
#include "global.h"

void fsm_setting_run(){
	switch(status){
		case SETTING_INIT:
			const_x = new_red_time;
			const_y = new_green_time;
			const_z = new_yellow_time;
			status = SETTING_RED1_GREEN2;
		case SETTING_RED1_GREEN2:
			red1_green2();
			set7seg2(new_red_time);
			set7seg4(new_green_time);
			if(timer_flag[1] == 1){
				new_red_time --;
				new_green_time --;
				if(new_green_time == 0) status = SETTING_RED1_YELLOW2;
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
		case SETTING_RED1_YELLOW2:
			red1_yellow2();
			set7seg2(new_red_time);
			set7seg4(new_yellow_time);
			if(timer_flag[1] == 1){
				new_red_time --;
				new_yellow_time --;
				if(new_yellow_time == 0){
					new_red_time = const_x;
				    new_green_time = const_y;
				    new_yellow_time = const_z;
					status = SETTING_GREEN1_RED2;
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
		case SETTING_GREEN1_RED2:
			green1_red2();
			set7seg2(new_green_time);
			set7seg4(new_red_time);
			if(timer_flag[1] == 1){
				new_green_time --;
				new_red_time --;
				if(new_green_time == 0) status = SETTING_YELLOW1_RED2;
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
		case SETTING_YELLOW1_RED2:
			yellow1_red2();
			set7seg2(new_yellow_time);
			set7seg4(new_red_time);
			if(timer_flag[1] == 1){
				new_yellow_time --;
				new_red_time --;
				if(new_yellow_time == 0){
					new_red_time = const_x;
				    new_green_time = const_y;
				    new_yellow_time = const_z;
					status = SETTING_RED1_GREEN2;
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
