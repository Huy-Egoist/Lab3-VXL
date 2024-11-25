/*
 * timerlab3.h
 *
 *  Created on: Oct 31, 2024
 *      Author: Admin
 */

#ifndef INC_TIMERLAB3_H_
#define INC_TIMERLAB3_H_

#include "main.h"

extern int timer_cycle;
extern int timer_flag[10];
extern int timer_counter[10];
void setTimer(int index, int counter);
void timerRun();




#endif /* INC_TIMERLAB3_H_ */
