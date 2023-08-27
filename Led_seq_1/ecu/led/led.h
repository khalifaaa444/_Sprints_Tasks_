/*
 * led.h
 *
 * Created: 8/26/2023 9:55:43 AM
 *  Author: khalifa
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../mcal/dio/dio.h"



typedef enum
{
	OK_LED,
	ERROR_LED,
}EN_STATUS_LED_t;


EN_STATUS_LED_t led_init(EN_PORT_NAME_t port_num , EN_PIN_NAME_t pin_num);

EN_STATUS_LED_t led_on(EN_PORT_NAME_t port_num , EN_PIN_NAME_t pin_num);

EN_STATUS_LED_t led_off(EN_PORT_NAME_t port_num , EN_PIN_NAME_t pin_num);

EN_STATUS_LED_t led_toggle(EN_PORT_NAME_t port_num , EN_PIN_NAME_t pin_num);





#endif /* LED_H_ */