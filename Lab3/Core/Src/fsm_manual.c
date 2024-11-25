/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Admin
 */

#include "fsm_manual.h"
#include "global.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			set7seg2(2);
			if(timer_flag[2] == 1) {
				blinking_red();
				setTimer(2, 500);
			}
			if(timer_flag[3] == 1){
				led7_segment_display_2(count);
				setTimer(3, 50);
			}
			if(isButtonPressed(1) == 1){
				count = 1;
				setINIT();
				status = MAN_GREEN;
			}
			if(isButtonPressed(2) == 1){
				if (count > 99) {
					count = 1;
				}
				count++;
			}
			if(isButtonPressed(3) == 1){
				new_red_time = count;
				count = 1;
			}
			break;
		case MAN_GREEN:
			set7seg2(3);
			if(timer_flag[2] == 1){
				blinking_green();
				setTimer(2, 1000);
			}
			if(timer_flag[3] == 1){
				led7_segment_display_2(count);
				setTimer(3, 50);
			}
			if(isButtonPressed(1) == 1){
				count = 1;
				setINIT();
				status = MAN_YELLOW;
			}
			if(isButtonPressed(2) == 1){
				if (count > 99) {
					count = 1;
				}
				count++;
			}
			if(isButtonPressed(3) == 1){
				new_green_time = count;
				count = 1;
			}
			break;
		case MAN_YELLOW:
			set7seg2(4);
			if(timer_flag[2] == 1){
				blinking_yellow();
				setTimer(2, 1000);
			}
			if(timer_flag[3] == 1){
				led7_segment_display_2(count);
				setTimer(3, 50);
			}
			if(isButtonPressed(1) == 1){
				count = 1;
				INIT_TIME();
				setINIT();
				status = AUTO_RED1_GREEN2;
				setTimer(1, 1000);
			}
			if(isButtonPressed(2) == 1){
				if (count > 99) {
					count = 1;
				}
				count++;
			}
			if(isButtonPressed(3) == 1){
				new_yellow_time = count;
				if(new_red_time = new_green_time + new_yellow_time){
					INIT_TIME();
					count = 1;
					setINIT();
					status = SETTING_INIT;
					setTimer(1, 1000);
				}
				else{
					INIT_TIME();
					count = 1;
					setINIT();
					status = AUTO_RED1_GREEN2;
					setTimer(1, 1000);
				}
			}
		default:
			break;
	}
}

