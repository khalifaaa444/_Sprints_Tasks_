/*
 * button.h
 *
 * Created: 8/26/2023 9:55:53 AM
 *  Author: khalifa
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_



#include "../../mcal/dio/dio.h"

typedef enum
{
	OK_BUTTON,
	
	ERROR_BUTTON,
	
}EN_STATUS_BUTTON_t;


EN_STATUS_BUTTON_t button_init(uint8_t port_num , uint8_t pin_num);

EN_STATUS_BUTTON_t buttonState(uint8_t port_num , uint8_t pin_num , uint8_t* value);





#endif /* BUTTON_H_ */