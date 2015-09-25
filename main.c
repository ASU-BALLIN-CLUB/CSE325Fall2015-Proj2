//
//  main.c
//
//	Proj02
//  Lab Partners: Sean Slamka
//  Email: sslamka@asu.edu
//  CSE325 Embedded Microprocessor Systems
//  Fall 2015
//



#include "global.h" // Access to int data types and includes mkl46z.h
#include "sleazy_delay.h" // Brings the declaration of sleazy_delay() into this file.
#include "gpio.h"
#include "led.h"
#include "sim.h"

#define forever for(;;)

static int const GPIOB = 2;	// The GPIOB port config
static int const PIN0 = 0;	// Const for Pins 1-4
static int const PIN1 = 1;
static int const PIN2 = 2;
static int const PIN3 = 3;
static int DELAY = 400000;	// for sleazy delay to about 250 ms
static int count = 0;		// count to go through the forever loop
int main()
{

	// enable the clock to PORTB
	sim_hw_init(GPIOB);
	// Configure PTB0-3 for GPIO function
	gpio_init(GPIOB, PIN0);
	gpio_init(GPIOB, PIN1);
	gpio_init(GPIOB, PIN2);
	gpio_init(GPIOB, PIN3);

	
	// Create an infinite loop. Note that main() should never return.
	forever {
		switch(count)
		{
			case 1:
				led_all_off();// turn off all LED
				led_on(PIN0); // turn on led 1 only
				break;
			case 2:
				led_all_off();
				led_on(PIN1);
				break;
			case 3:
				led_all_off();
				led_on(PIN0);
				led_on(PIN1);
				break;
			case 4:
				led_all_off();
				led_on(PIN2);
				break;
			case 5:
				led_all_off();
				led_on(PIN2);
				led_on(PIN0);
				break;
			case 6:
				led_all_off();
				led_on(PIN2);
				led_on(PIN1);
				break;
			case 7:
				led_all_off();
				led_on(PIN2);
				led_on(PIN1);
				led_on(PIN0);
				break;
			case 8:
				led_all_off();
				led_on(PIN3);
				break;
			case 9:
				led_all_off();
				led_on(PIN3);
				led_on(PIN0);
				break;
			case 10:
				led_all_off();
				led_on(PIN3);
				led_on(PIN1);
				break;
			case 11:
				led_all_off();
				led_on(PIN3);
				led_on(PIN1);
				led_on(PIN0);
				break;
			case 12:
				led_all_off();
				led_on(PIN3);
				led_on(PIN2);
				break;
			case 13:
				led_all_off();
				led_on(PIN3);
				led_on(PIN2);
				led_on(PIN0);
				break;
			case 14:
				led_all_off();
				led_on(PIN3);
				led_on(PIN2);
				led_on(PIN1);
				break;
			case 15:
				led_all_off();
				led_on(PIN3);
				led_on(PIN2);
				led_on(PIN1);
				led_on(PIN0);
				break;
			default: //default case to turn off all led at end of cycle
				led_all_off();
				break;
		}
		
 		sleazy_delay(DELAY);
 		led_all_off();
 		// Delay for a while.
 		sleazy_delay(DELAY);// DELAY set to 400000 about 250ms
 		if(count<15)//use to navigate through binary numbers
 			count = count +1;
 		else
 			count = 0;
	}
	// Even though we will never get here, main() is supposed to return an int.
	return 0;
}
