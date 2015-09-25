//************************************************************************************************************
// FILE: sim.c
//
// DESCRIPTION
//
// AUTHOR
// Sean E Slamka (sslamka@asu.edu)
// Computer Science & Engineering
// Arizona State University, Tempe AZ 85287-8809
// Web: http://www.devlang.com
//************************************************************************************************************

#include "sim.h"

// initilize SIM module
void sim_hw_init(int port)
{
	switch(port)
	{
		case 2://Case 2 -> portB SIM running
			SIM_BASE_PTR->SCGC5 = 1 << SIM_SCGC5_PORTB_SHIFT;
			break;
		default:
			break;
	}
}








