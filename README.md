Introduction:
The report presents an analysis of the SmartCar program developed by Ahmed M.Rabie and Mohamed Abdeen.The program 
implements various functions to control a SmartCar using a microcontroller(AVR).The SmartCar is designed to move in 
different directions, avoid obstacles, and track humans.

-----------------------------------------------------------------------------------------------------------------------

Video in LinkedIn: https://www.linkedin.com/posts/ahmed-m-rabie-0ba5b120b_avr-smartabrcar-avoidabrobtcales-activity-7068618013926727680-EjaC?utm_source=share&utm_medium=member_desktop

-----------------------------------------------------------------------------------------------------------------------

Modes:
1) Obstacle avoiding mode (self driving) 
2) Control mode (using bluetooth) 
3) Human tracking mode (using Ultrasonic and IR Sensors) 
-----------------------------------------------------------------------------------------------------------------------
Drivers:
- MCAL:  DIO, GIE, TIMERS, EXTI_INT, UART
- HAL:     SVORM, ULTRASONIC
- LIB:       BIT_MATHS, STD_TYPES
-----------------------------------------------------------------------------------------------------------------------
Components:
- ATmega32 IMT Kit
- 3x3.7v Batteries
- 4 DC-Motors
- 4 Wheels
- H-Bridge (L298N)
- Bluetooth Module 
- Servo Motor 
- Ultrasonic Sensor
- 2 IR Sensors
-----------------------------------------------------------------------------------------------------------------------

Code Structure:
The code begins with some comments that provide information about the authors, file, date, and variables used. It also 
includes necessary header files and macro definitions.

The program is organized into several sections:

Car Speed Function: This section contains a function to set the speed of the SmartCar using the TIMER0 module.

Car Directions Functions: This section includes functions to control the movement of the SmartCar in different directions, 
such as moving forward, backward, left, and right. These functions utilize the L298N motor driver module to control the motors.

Step Functions: This section defines functions for the SmartCar to take specific steps, such as moving forward or backward 
for a certain duration and making turns at specific angles.

Obstacle Avoiding Mode: This section implements functions to enable the SmartCar to avoid obstacles. It uses an ultrasonic sensor 
to detect the presence of obstacles. When an obstacle is detected, the SmartCar stops, reads distances from the left and right 
sides, and maneuvers to an empty road.

Control Mode: This section provides functions to control the SmartCar manually using commands received from a user through UART 
communication. The user can control the SmartCar's movement in various directions and adjust the speed.

Humans Tracking Mode: This section implements a mode where the SmartCar can track humans. It uses infrared (IR) sensors and ultrasonic 
sensor to detect humans and adjust its movement accordingly.

-----------------------------------------------------------------------------------------------------------------------

Note: 
The ultrasonic sensor works with ICU software Technique (ICU SW) using timer 2 to generate suitable pwm and External interuppt prepheral

-----------------------------------------------------------------------------------------------------------------------

Conclusion:
The SmartCar program demonstrates the functionality of a microcontroller-based system for controlling a SmartCar. It provides 
various modes of operation, including obstacle avoiding, manual control, and humans tracking. The program utilizes different 
modules such as motors, ultrasonic sensors, servo motors, and UART communication to achieve the desired functionality. The code 
is well-structured and modular, making it easy to understand and maintain. Overall, the SmartCar program showcases the capabilities
of microcontroller-based systems in the field of robotics and automation.

-----------------------------------------------------------------------------------------------------------------------

![photo_2023-05-28_06-35-26](https://github.com/Ahmed-MRabie/SmartCar_Project/assets/134658604/86a9fe60-751d-4657-9bf8-255d12af7926)

