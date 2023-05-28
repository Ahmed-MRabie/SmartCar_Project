//**********************************************************************************************************************************************
//******************************************************************************************************************************************
//************** Auther: Ahmed M.Rabie && Mohamed Abdeen  ****************************************************************************************************
//************** File  : main				 		      *****************************************************************************************************
//************** Date  : 1/5/2023    				      *****************************************************************************************************
//************** Var   : V1        				          ******************************************************************************************************
//*********************************************************************************************************************************************
//**********************************************************************************************************************************************

#define F_CPU 8000000UL
#include <util/delay.h>

#include "04-LIB/STD_TYPES.h"
#include "04-LIB/Bit-math.h"

#include "03-MCAL/DIO/DIO_interface.h"
#include "03-MCAL/GIE/GIE_interface.h"
#include "03-MCAL/TIMERS/TIMERS_interface.h"
#include "03-MCAL/TIMERS/TIMER1_interface.h"
#include "03-MCAL/UART/UART_interface.h"
#include "03-MCAL/EXTI _INT/INT_interface.h"

#include "02-HAL/ULTRASONIC/ULTRASONIC_SENSOR_interface.h"
#include "02-HAL/SRVMO/SRVMO_interface.h"

#include "01-APP/SmartCar_interface.h"

int main (void)
{

	SmartCar_VidInit();

	while(1)
	{
		SmartCar_VidProg();
	}
	return 0;

}

