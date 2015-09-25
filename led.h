//************************************************************************************************************
// FILE: led.h
//
// DESCRIPTION
//
// AUTHOR
// Sean E Slamka (sslamka@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
// Web: http://www.devlang.com
//************************************************************************************************************


#ifndef LED_H_
#define LED_H_

#include "global.h" // Access to int data types and includes mkl46z.h
#include "sleazy_delay.h" // Brings the declaration of sleazy_delay() into this file.


//forward declaration functions
void led_on(int pin);
void led_off(int pin);
void led_all_off();
void led_all_on();


#endif /* LED_H_ */
