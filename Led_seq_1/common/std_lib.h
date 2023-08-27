/*
 * std_lib.h
 *
 * Created: 8/26/2023 9:59:16 AM
 *  Author: khalifa
 */ 


#ifndef STD_LIB_H_
#define STD_LIB_H_



// unsigned integers
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

//signed	integers
typedef signed char sint8_t;
typedef signed short sint16_t;
typedef signed int sint32_t;

//floating
typedef	float f32_t;


typedef enum
{
	FALSE,
	TRUE
}EN_BOOL_t;

#define  NULL               0
#define  NULLPTR           ((void*)0)


#endif /* STD_LIB_H_ */