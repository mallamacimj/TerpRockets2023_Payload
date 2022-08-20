#ifndef EXTERNAL_ARDUINO_FUNCTIONS_HPP
#define EXTERNAL_ARDUINO_FUNCTIONS_HPP

//Add function prototypes here
void SD_begin();
void MPU6050_begin();
void BH1750_begin();
void Buzzer();
bool determineLaunch(bool);
void startInnerArduino();
bool determineDrogue(bool);
void openDoor();
bool determineSepartion(bool);
void startParachuteTimer();
void openStraps();
void closeDoor();

#endif
