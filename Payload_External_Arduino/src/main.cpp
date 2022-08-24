#include <Arduino.h>
#include <external_arduino_functions.cpp>

//global varibles for staging
//Make ONE stage variable that has all this information
bool LAUNCH = 0; //0 if launch has not occured, 1 if it has
bool DROGUE = 0; //0 if main drogue not deployed, 1 if it has
bool SEPARTION = 0; //0 if not good for separation, 1 if it is

void setup() {
  // put your setup code here, to run once:
  SD_begin();
  MPU6050_begin();
  BH1750_begin();
  Buzzer();
}

void loop() {
  // put your main code here, to run repeatedly:

  //Here add the data gathering for each loop
  //That means functions that output RTC, Accel, Gyro
  //and maybe light sensor (only do that after launch)


  //This code down here isn't going to work
  //Like the global variables for stage (but make one)
  //Need to change these functions so that they always loop
  //This means adding some if statements but thats fine 
  LAUNCH = determineLaunch(LAUNCH);
  startInnerArduino();
  DROGUE = determineDrogue(DROGUE);
  openDoor();
  SEPARTION = determineSepartion(SEPARTION);
  startParachuteTimer();
  openStraps();
  closeDoor();

}
