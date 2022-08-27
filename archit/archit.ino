#include <ESP32Servo.h>


Servo ServoM;
Servo ServoM2;
Servo ServoM3;
Servo ServoM4;



Servo ServoM5;
Servo ServoM6;
Servo ServoM7;
Servo ServoM8;

void setup()
{
  ServoM.attach(27); // upper
  ServoM2.attach(14); //lower
  ServoM3.attach(17); // upper
  ServoM4.attach(16); //lower
  
  ServoM5.attach(32); // upper
  ServoM6.attach(33); //lower
  ServoM7.attach(25); // upper
  ServoM8.attach(26); //lower
  
  
  Serial.begin(9600);
  ServoM.write(115);
  ServoM2.write(15);
  ServoM3.write(65);
  ServoM4.write(165);

  ServoM5.write(115);
  ServoM6.write(15);
  ServoM7.write(35);
  ServoM8.write(165);

}


void loop()
{
//  delay(1000);


//BACK LEFT
//  int i = 0;
  for(int i=0; i<1; i++){
    ServoM.write(125);
    ServoM2.write(10);
//    delay(100);
  }
  delay(150);
//  int j = 0;
  for(int j=0; j<1; j++){
    ServoM.write(110);
    ServoM2.write(30);
//    delay(100);
  }
  delay(150);
//  int k = 0;
  for(int k=0; k<1; k++){
    ServoM.write(125);
    ServoM2.write(10);
//    delay(100);
  }




//FRONT RIGHT
  for(int i=0; i<1; i++){
    ServoM3.write(75);
    ServoM4.write(165);
//    delay(100);
  }
  delay(150);
  for(int j=0; j<1; j++){
    ServoM3.write(90);
    ServoM4.write(135);
//    delay(100);
  }
  delay(150);
  for(int k=0; k<1; k++){
    ServoM3.write(75);
    ServoM4.write(165);
//    delay(100);
  }





//FRONT LEFT
//  int i = 0;
  for(int i=0; i<1; i++){
    ServoM5.write(120);
    ServoM6.write(5);
//    delay(100);
  }
  delay(150);
//  int j = 0;
  for(int j=0; j<1; j++){
    ServoM5.write(105);
    ServoM6.write(35);
//    delay(100);
  }
  delay(150);
//  int k = 0;
  for(int k=0; k<1; k++){
    ServoM5.write(120);
    ServoM6.write(5);
//    delay(100);
  }







//BACK RIGHT
  for(int i=0; i<1; i++){
    ServoM7.write(35);
    ServoM8.write(180);
//    delay(100);
  }
  delay(150);
  for(int j=0; j<1; j++){
    ServoM7.write(50);
    ServoM8.write(150);
//    delay(100);
  }
  delay(150);
  for(int k=0; k<1; k++){
    ServoM7.write(35);
    ServoM8.write(180);
//    delay(100);
  }





//  int pos = 0;
//  for (pos = 0; pos <= 35; pos++)
//  {
//    ServoM.write(90+ pos);
//    ServoM2.write(55-(pos));
//    ServoM3.write(180-90+ pos);
//    ServoM4.write(180-55-(pos));
//    delay(10);
//  }
//  Serial.println("90 Reached");
//  delay(500);
//
//  for (pos = 0; pos <=35; pos++)
//  {
//    ServoM.write(125-pos);
//    ServoM2.write(20+(pos));
//    
//    ServoM3.write(180-125-pos);
//    ServoM4.write(180-20+(pos));
//    delay(10);
//  }
//  Serial.println("0 Reached");
////  delay(1200);


}
