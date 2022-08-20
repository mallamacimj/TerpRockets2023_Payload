#include <Arduino.h>
#include <external_arduino_functions.cpp>

//global varibles for staging
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

  LAUNCH = determineLaunch(LAUNCH);
  startInnerArduino();
  DROGUE = determineDrogue(DROGUE);
  openDoor();
  SEPARTION = determineSepartion(SEPARTION);
  startParachuteTimer();
  openStraps();
  closeDoor();
  
}
