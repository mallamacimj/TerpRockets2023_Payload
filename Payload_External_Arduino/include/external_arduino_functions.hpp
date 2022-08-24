#ifndef EXTERNAL_ARDUINO_FUNCTIONS_HPP
#define EXTERNAL_ARDUINO_FUNCTIONS_HPP

//Add function prototypes here
void SD_begin();
void MPU6050_begin();
void BH1750_begin();
void Buzzer();
int determineLaunch(int);
void startInnerArduino();
int determineDrogue(int);
void openDoor();
int determineSepartion(int);
void startParachuteTimer();
void openStraps();
void closeDoor();

#endif
