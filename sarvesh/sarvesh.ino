#include <ESP32Servo.h>

#define front1 17
#define front2 16
#define front3 32
#define front4 33

#define back5 25
#define back6 26
#define back7 27
#define back8 14

Servo Servofront1;
Servo Servofront2;
Servo Servofront3;
Servo Servofront4;

Servo Servoback5;
Servo Servoback6;
Servo Servoback7;
Servo Servoback8;

void setup()
{
  Serial.begin(9600);
  Servofront1.attach(front1);
  Servofront2.attach(front2);
  Servofront3.attach(front3);
  Servofront4.attach(front4);

  Servoback5.attach(back5);
  Servoback6.attach(back6);
  Servoback7.attach(back7);
  Servoback8.attach(back8);


  Servoback6.write(100);
  Servoback5.write(75);
  Servoback7.write(180 - 75);
  Servoback8.write(180 - 100);
  Servofront1.write(75);
  Servofront2.write(100);
  Servofront3.write(180 - 75);
  Servofront4.write(100);
}


void loop()
{
  int pos = 0;
  // front right


  for (pos = 100; pos <= 150; pos++)
  {
    Servofront2.write(pos);
    Servoback8.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-1");
  delay(10);

  for (pos = 75; pos <= 100; pos++)
  {
    Servofront1.write(pos);
    Servoback7.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-2");
  delay(10);

  for (pos = 150; pos >= 100; pos--)
  {
    Servofront2.write(pos);
    Servoback8.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-3");
  delay(10);


  for (pos = 75; pos >= 45; pos--)
  {
    Servoback5.write(pos);
    Servofront3.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-4");
  delay(10);


  for (pos = 100; pos >= 80; pos--)
  {
    Servofront1.write(pos);
    Servoback7.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-5");
  delay(10);

//  for (pos = 25; pos >= 5; pos--)
//  {
//    Servoback5.write(pos);
//    Servofront3.write(180 - pos);
//    delay(10);
//  }
//  Serial.println("Step-6");
//  delay(10);

  for (pos = 100; pos <= 175; pos++)
  {
    Servoback6.write(pos);
    Servofront4.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-7");
  delay(10);

  for (pos = 25; pos <= 75; pos++)
  {
    Servoback5.write(pos);
    Servofront3.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-8");
  delay(10);

  for (pos = 175; pos >= 100; pos--)
  {
    Servoback6.write(pos);
    Servofront4.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-9");
  delay(10);


  for (pos = 80; pos >= 75; pos--)
  {
    Servofront1.write(pos);
    Servoback7.write(180 - pos);
    delay(10);
  }
  Serial.println("Step-10");
  delay(10);

//  for (pos = 110; pos >= 100; pos--)
//  {
//    Servoback6.write(pos);
//    Servofront4.write(180 - pos);
//    delay(10);
//  }
//  Serial.println("Step-11");
//  delay(10);
//
//  for (pos = 80; pos >= 75; pos--)
//  {
//    Servoback5.write(pos);
//    Servofront3.write(180 - pos);
//    delay(10);
//  }
//  Serial.println("Step-12");
//  delay(10);
//
//  for (pos = 110; pos >= 100; pos--)
//  {
//    Servofront2.write(pos);
//    Servoback8.write(180 - pos);
//    delay(10);
//  }
//  Serial.println("Step-13");
//  delay(10);
//
//  for (pos = 25; pos <= 80; pos++)
//  {
//    Servofront1.write(pos);
//    Servoback7.write(180 - pos);
//    delay(10);
//  }
//  Serial.println("Step-14");
//  delay(10);


}
