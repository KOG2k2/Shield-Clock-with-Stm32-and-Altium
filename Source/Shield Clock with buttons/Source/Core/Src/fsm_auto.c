/*
 * fsm_auto.c
 *
 *  Created on: Nov 10, 2022
 *      Author: Admin
 */

#include "fsm_auto.h"

int Second_count = INITIAL_STATE;
int Minute_count = INITIAL_STATE;
int Hour_count = INITIAL_STATE;

int state = INITIAL_STATE;
//int index = 0;

void clock_auto_run(){
	if(Second_count == SECOND_COUNT){
		Second_count = INITIAL_STATE;
		Minute_count++;
	}

	if(Minute_count == MINUTE_COUNT){
		Minute_count = INITIAL_STATE;
		Hour_count++;
	}

	if(Hour_count == HOUR_COUNT) Hour_count = INITIAL_STATE;

	clear_All_Clock();
	set_Number_on_Clock(Second_count);
	set_Number_on_Clock(Second_count/5);
	set_Number_on_Clock(Minute_count/5);
	set_Number_on_Clock(Hour_count);

	Second_count++;
}
