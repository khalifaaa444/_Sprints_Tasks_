/*
 * app.h
 *
 * Created: 8/26/2023 9:54:06 AM
 *  Author: khalifa
 */ 


#ifndef APP_H_
#define APP_H_




#include "../ecu/button/button.h"
#include "../ecu/led/led.h"


typedef enum
{
	LED_ZERO,
	LED_ONE,
	LED_TWO,
	LED_THREE,
}EN_LED_NUM_t;


void app_init();

void app_start();




#endif /* APP_H_ */