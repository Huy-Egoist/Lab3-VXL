/*
 * global.h
 *
 *  Created on: Nov 11, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timerlab3.h"
#include "buttonlab3.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "fsm_setting.h"
#include "led7_segment.h"
#include "light_traffic.h"

#define INIT					1
#define AUTO_RED1_GREEN2		2
#define AUTO_RED1_YELLOW2		3
#define AUTO_GREEN1_RED2		4
#define AUTO_YELLOW1_RED2		5
#define MAN_RED					6
#define MAN_GREEN				7
#define MAN_YELLOW				8
#define SETTING_INIT			9
#define SETTING_RED1_GREEN2		10
#define SETTING_RED1_YELLOW2	11
#define SETTING_GREEN1_RED2		12
#define SETTING_YELLOW1_RED2	13

extern int count;
extern int count_1;
extern int count_2;

extern int status;

extern int red_time;
extern int green_time;
extern int yellow_time;
extern int new_red_time;
extern int new_green_time;
extern int new_yellow_time;
extern int const_x;
extern int const_y;
extern int const_z;


void setINIT();
void setRED1();
void setGREEN1();
void setYELLOW1();
void setRED2();
void setGREEN2();
void setYELLOW2();

void seg1_0();
void seg1_1();
void seg1_2();
void seg1_3();
void seg1_4();
void seg1_5();
void seg1_6();
void seg1_7();
void seg1_8();
void seg1_9();

void seg2_0();
void seg2_1();
void seg2_2();
void seg2_3();
void seg2_4();
void seg2_5();
void seg2_6();
void seg2_7();
void seg2_8();
void seg2_9();

void seg3_0();
void seg3_1();
void seg3_2();
void seg3_3();
void seg3_4();
void seg3_5();
void seg3_6();
void seg3_7();
void seg3_8();
void seg3_9();

void seg4_0();
void seg4_1();
void seg4_2();
void seg4_3();
void seg4_4();
void seg4_5();
void seg4_6();
void seg4_7();
void seg4_8();
void seg4_9();



#endif /* INC_GLOBAL_H_ */
