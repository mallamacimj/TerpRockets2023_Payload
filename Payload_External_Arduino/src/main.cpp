#include <Arduino.h>
#include <external_arduino_functions.cpp>

//global variable to determine the stage of the rocket
//0: Rocket not launch
//1: Rocket launched
//2: Drogue out
//3: Payload separation completed
int STAGE = 0;


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


  //Determine Stage
  if(STAGE == 0){
    STAGE = determineLaunch(STAGE);
  }
  elseif(STAGE == 1){
    STAGE = determineDrogue(STAGE);
  }
  elseif(STAGE == 2){
    STAGE = determineSepartion(STAGE)
  }

  //This code down here isn't going to work
  //But it is in the order that things need to happen
  //Like the global variables for stage (but make one)
  //Need to change these functions so that they always loop
  //This means adding some if statements but thats fine
  /*STAGE = determineLaunch(STAGE);
  startInnerArduino();
  STAGE = determineDrogue(STAGE);
  openDoor();
  STAGE = determineSepartion(STAGE);
  startParachuteTimer();
  openStraps();
  closeDoor();*/

}
