//3-Axis Gyro scope
#include <I2Cdev.h>
#include <MPU6050.h>
#include <Wire.h>
MPU6050 mpu;
int16_t ax, ay, az;  //int 16bit
int16_t gx, gy, gz;
int valx , valy , valz;
int degree = 0;

//7-Segment
#include "TM1637.h"
const int CLK = A3;
const int DIO = A2;
TM1637 sevenSegment(CLK, DIO);

//Red dot
int laserPin = 13;

//Active Buzzer
int speakerPin = A0;


void setup() {
    //3-Axis Gyro scope
    Wire.begin();
    Serial.begin(9600);
    Serial.println("Initialize MPU");
    mpu.initialize();
    Serial.println(mpu.testConnection() ? "Connected" : "Connection failed");

    //7-Segment
    sevenSegment.init(); //initialize
    sevenSegment.set(7); // BRIGHT 0-7;

    //Red dot
    pinMode(laserPin, OUTPUT);  // Define the digital output interface pin 13 
    
    //Active Buzzer
    pinMode (speakerPin, OUTPUT);

    
}



void loop() {
    //3-Axis Gyro scope
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    valx = map(ax, -17000, 17000, 0, 179);
    valy = map(ay, -17000, 17000, 0, 179);
    valz = map(az, -17000, 17000, 0, 179);
    degree = abs(valx - 90);
    Serial.println(degree);
    
    //7-Segment
    if(degree>0){
        sevenSegment.displayNum(degree);
    }
    if(degree==0){
        sevenSegment.displayStr("0");

        //Active Buzzer
        digitalWrite(speakerPin,1);
    }

    if(degree!=0){
        //Active Buzzer
        digitalWrite(speakerPin,0);
    }

    //Red dot
    if(degree>=0&&degree<46){
        digitalWrite(laserPin, HIGH);
    }
    if(degree>45){
        digitalWrite(laserPin, LOW); 
    }
    delay(100);

    
    
    
}