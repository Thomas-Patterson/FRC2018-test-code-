/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include "ctre/Phoenix.h"
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <Joystick.h>

class Robot : public frc::IterativeRobot {
public:
	TalonSRX *talon_Left_One;TalonSRX *talon_Left_Two;TalonSRX *talon_Left_Three;TalonSRX *talon_Left_Four;
	TalonSRX *talon_Right_One;TalonSRX *talon_Right_Two;TalonSRX *talon_Right_Three;TalonSRX *talon_Right_Four;

	Joystick *JoyOP ;
	void RobotInit() {
		talon_Left_One = new TalonSRX(0);
		talon_Left_Two= new TalonSRX(0);
		talon_Left_Three= new TalonSRX(0);
		talon_Left_Four= new TalonSRX(0);
		talon_Right_One = new TalonSRX(0);
		talon_Right_Two= new TalonSRX(0);
		talon_Right_Three= new TalonSRX(0);
		talon_Right_Four= new TalonSRX(0);

		JoyOP = new Joystick(0);;


	}

	/*
	 * This autonomous (along with the chooser code above) shows how to
	 * select
	 * between different autonomous modes using the dashboard. The sendable
	 * chooser code works with the Java SmartDashboard. If you prefer the
	 * LabVIEW Dashboard, remove all of the chooser code and uncomment the
	 * GetString line to get the auto name from the text box below the Gyro.
	 *
	 * You can add additional auto modes by adding additional comparisons to
	 * the
	 * if-else structure below with additional strings. If using the
	 * SendableChooser make sure to add them to the chooser code above as
	 * well.
	 */
	void AutonomousInit() override {

	}

	void AutonomousPeriodic() {

	}

	void TeleopInit() {

	}

	void TeleopPeriodic() {

	}

	void TestPeriodic() {
		if(JoyOP->GetRawButton(1)){
			talon_Left_One->Set(ControlMode::PercentOutput, 1);
			talon_Left_Two->Set(ControlMode::PercentOutput, 1);
			talon_Left_Three->Set(ControlMode::PercentOutput, 1);
			talon_Left_Four->Set(ControlMode::PercentOutput, 1);
			talon_Right_One->Set(ControlMode::PercentOutput, 0);
			talon_Right_Two->Set(ControlMode::PercentOutput, 0);
			talon_Right_Three->Set(ControlMode::PercentOutput, 0);
			talon_Right_Four->Set(ControlMode::PercentOutput, 0);
		}else if(JoyOP->GetRawButton(2)){
			talon_Right_One->Set(ControlMode::PercentOutput, 1);
			talon_Right_Two->Set(ControlMode::PercentOutput, 1);
			talon_Right_Three->Set(ControlMode::PercentOutput, 1);
			talon_Right_Four->Set(ControlMode::PercentOutput, 1);
			talon_Left_One->Set(ControlMode::PercentOutput, 0);
			talon_Left_Two->Set(ControlMode::PercentOutput, 0);
			talon_Left_Three->Set(ControlMode::PercentOutput, 0);
			talon_Left_Four->Set(ControlMode::PercentOutput, 0);
		}else if(JoyOP->GetRawButton(3)){
			talon_Left_One->Set(ControlMode::PercentOutput, -1);
			talon_Left_Two->Set(ControlMode::PercentOutput, -1);
			talon_Left_Three->Set(ControlMode::PercentOutput, -1);
			talon_Left_Four->Set(ControlMode::PercentOutput, -1);
			talon_Right_One->Set(ControlMode::PercentOutput, 0);
			talon_Right_Two->Set(ControlMode::PercentOutput, 0);
			talon_Right_Three->Set(ControlMode::PercentOutput, 0);
			talon_Right_Four->Set(ControlMode::PercentOutput, 0);
		}else if(JoyOP->GetRawButton(4)){
			talon_Right_One->Set(ControlMode::PercentOutput, -1);
			talon_Right_Two->Set(ControlMode::PercentOutput, -1);
			talon_Right_Three->Set(ControlMode::PercentOutput, -1);
			talon_Right_Four->Set(ControlMode::PercentOutput, -1);
			talon_Left_One->Set(ControlMode::PercentOutput, 0);
			talon_Left_Two->Set(ControlMode::PercentOutput, 0);
			talon_Left_Three->Set(ControlMode::PercentOutput, 0);
			talon_Left_Four->Set(ControlMode::PercentOutput, 0);
		}else{//stop all
			talon_Left_One->Set(ControlMode::PercentOutput, 0);
			talon_Left_Two->Set(ControlMode::PercentOutput, 0);
			talon_Left_Three->Set(ControlMode::PercentOutput, 0);
			talon_Left_Four->Set(ControlMode::PercentOutput, 0);
			talon_Right_One->Set(ControlMode::PercentOutput, 0);
			talon_Right_Two->Set(ControlMode::PercentOutput, 0);
			talon_Right_Three->Set(ControlMode::PercentOutput, 0);
			talon_Right_Four->Set(ControlMode::PercentOutput, 0);
		}
	}

private:

};

START_ROBOT_CLASS(Robot)
