/*
 * button.c
 *
 * Created: 8/26/2023 9:56:04 AM
 *  Author: khalifa
 */ 

#include "button.h"

EN_STATUS_BUTTON_t buttonState(uint8_t port_num , uint8_t pin_num , uint8_t* value)
{
	EN_STATUS_BUTTON_t ret_function ;
	
	if(value == NULL)
	{
		ret_function = ERROR_BUTTON;
	}
	else
	{
		ret_function= DIO_read(port_num , pin_num , value);
	}
	
	return ret_function;
}


EN_STATUS_BUTTON_t button_init(uint8_t port_num , uint8_t pin_num)
{
	EN_STATUS_BUTTON_t ret_function = DIO_init(port_num,pin_num,IN);
	
	return ret_function;
}