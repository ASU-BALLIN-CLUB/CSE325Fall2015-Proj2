//************************************************************************************************************
// FILE: gpio.h
//
// DESCRIPTION
//
// AUTHOR
// Sean E Slamka (sslamka@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
// Web: http://www.devlang.com
//************************************************************************************************************


#ifndef GPIO_H_
#define GPIO_H_

#include "global.h" // Access to int data types and includes mkl46z.h
#include "sleazy_delay.h" // Brings the declaration of sleazy_delay() into this file.

//forward declair gpio_init function
void gpio_init(int port, int pin);



#endif /* GPIO_H_ */
