/*
 * timerlab3.h
 *
 *  Created on: Oct 31, 2024
 *      Author: Admin
 */

#ifndef INC_TIMERLAB3_H_
#define INC_TIMERLAB3_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();



#endif /* INC_TIMERLAB3_H_ */
