//
//  gpio.c
//
// DESCRIPTION
//
// AUTHOR
// Sean E Slamka (sslamka@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
// Web: http://www.devlang.com
//************************************************************************************************************

#include "gpio.h"


//Initilze GPIO port and pin.
void gpio_init(int port, int pin)
{
	switch (port)
	{
		case 2:// CASE 2 => PORTB
			PORTB_PCR(pin) |= 0b001 << 8;
			GPIOB_PDDR |= 1 << pin;
			break;
		default:
			break;
	}

}
