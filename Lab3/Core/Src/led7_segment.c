/*
 * led7_segment.c
 *
 *  Created on: Nov 13, 2024
 *      Author: Admin
 */

#include "led7_segment.h"

void set7seg1(int value) {
    switch (value) {
        case 0:
            seg1_0();
            break;
        case 1:
            seg1_1();
            break;
        case 2:
            seg1_2();
            break;
        case 3:
            seg1_3();
            break;
        case 4:
            seg1_4();
            break;
        case 5:
            seg1_5();
            break;
        case 6:
            seg1_6();
            break;
        case 7:
            seg1_7();
            break;
        case 8:
            seg1_8();
            break;
        case 9:
            seg1_9();
            break;
        default:
            break;
    }
}

void set7seg2(int value) {
    switch (value) {
        case 0:
            seg2_0();
            break;
        case 1:
            seg2_1();
            break;
        case 2:
            seg2_2();
            break;
        case 3:
            seg2_3();
            break;
        case 4:
            seg2_4();
            break;
        case 5:
            seg2_5();
            break;
        case 6:
            seg2_6();
            break;
        case 7:
            seg2_7();
            break;
        case 8:
            seg2_8();
            break;
        case 9:
            seg2_9();
            break;
        default:
            break;
    }
}

void set7seg3(int value) {
    switch (value) {
        case 0:
            seg3_0();
            break;
        case 1:
            seg3_1();
            break;
        case 2:
            seg3_2();
            break;
        case 3:
            seg3_3();
            break;
        case 4:
            seg3_4();
            break;
        case 5:
            seg3_5();
            break;
        case 6:
            seg3_6();
            break;
        case 7:
            seg3_7();
            break;
        case 8:
            seg3_8();
            break;
        case 9:
            seg3_9();
            break;
        default:
            break;
    }
}

void set7seg4(int value) {
    switch (value) {
        case 0:
            seg4_0();
            break;
        case 1:
            seg4_1();
            break;
        case 2:
            seg4_2();
            break;
        case 3:
            seg4_3();
            break;
        case 4:
            seg4_4();
            break;
        case 5:
            seg4_5();
            break;
        case 6:
            seg4_6();
            break;
        case 7:
            seg4_7();
            break;
        case 8:
            seg4_8();
            break;
        case 9:
            seg4_9();
            break;
        default:
            break;
    }
}
void led7_segment_display_1(int time){
	switch (count_1) {
	case 0:
		set7seg1(time / 10);
		count_1 = 1;
		break;
	case 1:
		set7seg2(time % 10);
		count_1 = 0;
		break;
	default:
		break;
	}
}
void led7_segment_display_2(int time){
	switch (count_2) {
	case 0:
		set7seg3(time / 10);
		count_2 = 1;
		break;
	case 1:
		set7seg4(time % 10);
		count_2 = 0;
		break;
	default:
		break;
	}
}


