#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTServo)
#pragma config(Sensor, S2,     irs,            sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C3_1,     motorH,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorI,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C4_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C4_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C4_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.

void initializeRobot()
{
	servo[servo1] = 0;
	servo[servo2] = 256;
	servo[servo3] = 256;

	return;
}

void ereset()
{
	nMotorEncoder[motorD] = 0;
	nMotorEncoder[motorE] = 0;
	nMotorEncoder[motorF] = 0;
	nMotorEncoder[motorG] = 0;

	return;
}

void moveforward()
{
	motor[motorD] = 50;
	motor[motorE] = 50;
	motor[motorF] = 50;
	motor[motorG] = 50;

	return;
}

void turnleft()
{
	motor[motorD] = -10;
	motor[motorE] = 50;
	motor[motorF] = -10;
	motor[motorG] = 50;

	return;
}

void turnright()
{
	motor[motorD] = 50;
	motor[motorE] = -10;
	motor[motorF] = 50;
	motor[motorG] = -10;

	return;
}

void movebackward()
{
	motor[motorD] = -50;
	motor[motorE] = -50;
	motor[motorF] = -50;
	motor[motorG] = -50;

	return;
}

task main()
{
	initializeRobot();

	ereset();

	waitForStart();

	moveforward();
	wait1Msec(3300);

	turnleft();
	wait1Msec(1650);
	
	movebackward();
	wait1Msec(300);

	moveforward();
	wait1Msec(1200);
	
	turnleft();
	wait1Msec(2000);
	
	moveforward();
	wait1Msec(1500);	
}
