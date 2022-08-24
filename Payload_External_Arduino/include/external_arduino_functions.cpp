//Add libraries needed here
#include "external_arduino_functions.hpp"
#include <SPI.h>
#include <Wire.h>
#include <SD.h> //SD card
#include <RTClib.h> //rtc
#include <hp_BH1750.h> //light sensor
#include <Adafruit_MPU6050.h> //accel and gyro
#include <Adafruit_Sensor.h> //accel and gyro dependency
#include <Servo.h> //servos


//Arduino Pins
int buzzer_pin = 2;
int door_pin = 4;
int servo1_pin = 5;
int servo2_pin = 6;
int str_pin = 7;
int servo3_pin = 9;
int servo4_pin = 10;
int sd_pin = 8;
int servopwr_pin = A0;

//Add const values here


//add functions here
void SD_begin(){
  //Start the SD card module
}

void MPU6050_begin(){
  //Start the accelerameter and gyroscope module
}

void BH1750_begin(){
  //Start the light sensor module
}

void Buzzer(){
  pinMode(buzzer_pin, OUTPUT);
  digitalWrite(buzzer_pin, HIGH);
  delay(1000);
  digitalWrite(buzzer_pin, LOW);
}

int determineLaunch(int launch){
  //This function must loop until launch occurs

  if (launch == 1){
    return launch = 1; //End the function if Launch has already occured
  }
  //Use the accelerameter to determine launch
  //must also write to the SD with data before launch


  return launch = 1;
}

void startInnerArduino(){
  pinMode(str_pin, OUTPUT);
  digitalWrite(str_pin, HIGH);
}

int determineDrogue(int drogue){
  //This function must loop until drogue deployment occurs
  if (drogue == 2){
    return drogue = 2;
  }
  //Use the accelerameter to determine main drogue
  //separation must also write to the SD with data
  //before main drogue separation

  return drogue = 2;
}

void openDoor(){
  //Activiates servo 3 to open door
  //This is different than the door pin
  //Don't forget to turn on servo power
}

int determineSepartion(int separation){
  //This function must loop until separation is good
  if (separation == 3){
    return separation = 3;
  }
  //Use the light sensor to determine when separation
  //can occur also write to the SD with data
  //about this separation

  return separation = 3;
}

void startParachuteTimer(){
  //Using I2C, connect with the inner payload
  //arduino and tell it to start a countdown
  //to release it's parachute
}

void openStraps(){
  //Activiates servo 1 and 2 to release the
  //straps holding the inner payload in place
  //Don't forget to turn on servo power
}

void closeDoor(){
  //Activiates servo 3 to close door
  //This is different than the door pin
  //Don't forget to turn on servo power
}
