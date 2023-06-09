//*******************************************************************************************************************************************
//**************Auther: Ahmed M.Rabie  &&  Mohamed Abdeen **********************************************************************************
//**************File  : Cfg of Servo       		          ***********************************************************************************
//**************Date  : 15/3/2023 	    			      *******************************************************************************
//**************Var   : V1            	                  *******************************************************************************
//**************Desc  :                 		          *******************************************************************************
//*******************************************************************************************************************************************
//*******************************************************************************************************************************************

#ifndef SRVMO_CFG_H_
#define SRVMO_CFG_H_

/* Select Which Servo is Run  "0" to "SRVMO_S_STANDERSERVO"
 	 	 	 	 	 	 	  "1" to "SRVMO_M_MySERVO"  */
#define SRVMO_SELECT    SRVMO_S_STANDERSERVO

/* Select Which Reg is work  "0" to "SRVMO_REG_OCR1A"
 	 	 	 	 	 	 	 "1" to "SRVMO_REG_OCR1B"  */
#define SRVMO_REG_MODE    SRVMO_REG_OCR1A


/* The Conection */

/*
 * PD5 is OUTPUT Conected To OC1A
 * PD2 is INPUTT Conected To OC1B
 *
 */


#endif
