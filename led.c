//************************************************************************************************************
// FILE: led.c
//
// DESCRIPTION
//
// AUTHOR
// Sean E Slamka (sslamka@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
// Web: http://www.devlang.com
//************************************************************************************************************

#include "led.h"

//Function to turn ON LED at whatever pin -> HIGH
void led_on(int pin)
{
	GPIOB_PDOR |= 1 << pin;
}

//Function to turn OFF LED at whatever pin -> LOW
void led_off(int pin)
{
	GPIOB_PDOR &= ~(1 << pin);
}

//Function to turn OFF all LED -> SET ALL LOW
void led_all_off()
{
	GPIOB_PDOR &= ~(1 << 0);
	GPIOB_PDOR &= ~(1 << 1);
	GPIOB_PDOR &= ~(1 << 2);
	GPIOB_PDOR &= ~(1 << 3);
	
}

//Function to turn ON all LED -> SET ALL HIGH
void led_all_on()
{
	GPIOB_PDOR |= 1 << 0;
	GPIOB_PDOR |= 1 << 1;
	GPIOB_PDOR |= 1 << 2;
	GPIOB_PDOR |= 1 << 3;
}

