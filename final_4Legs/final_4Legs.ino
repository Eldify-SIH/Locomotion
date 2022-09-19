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

}


void loop()
{
  int pos = 0;
  // front right
  for (pos = 0; pos <= 35; pos++)
  {
    Servofront1.write(80 + pos);
    Servofront2.write(135 + (pos));
    Servoback7.write(125 - pos);
    Servoback8.write(36 - (pos));
    delay(10);
  }
  Serial.println("Step-1");
  delay(500);

  for (pos = 0; pos <= 35; pos++)
  {
    Servofront1.write(115 - pos);
    Servofront2.write(170 -  (pos));
    Servoback7.write(90 + pos);
    Servoback8.write(1 + (pos));
    delay(10);
  }
  Serial.println("Step-2");
  //  delay(1200);
  delay(10);


  // front left
  for (pos = 0; pos <= 35; pos++)
  {
    Servofront3.write(125 - pos);
    Servofront4.write(36 - pos);
    Servoback5.write(50 + pos);
    Servoback6.write(145 + (pos));
    delay(10);
  }
  Serial.println("Step-3");
  delay(500);

  for (pos = 0; pos <= 35; pos++)
  {
    Servofront3.write(90 + pos);
    Servofront4.write(1 + (pos));
    Servoback5.write(85 - pos);
    Servoback6.write(180 - (pos));
    delay(10);
  }
  Serial.println("Step-4");
  //  delay(1200);
  delay(10);


  // back right
  //  for (pos = 0; pos <= 35; pos++)
  //  {
  //    Servoback5.write(50 + pos);
  //    Servoback6.write(145 + (pos));
  //    delay(10);
  //  }
  //  Serial.println("Step-5");
  //  delay(500);
  //
  //  for (pos = 0; pos <= 35; pos++)
  //  {
  //    Servoback5.write(85 - pos);
  //    Servoback6.write(180 - (pos));
  //    delay(10);
  //  }
  //  Serial.println("Step-6");
  //  //  delay(1200);
  //  delay(10);


  // back left
  //  for (pos = 0; pos <= 35; pos++)
  //  {
  //    Servoback7.write(125 - pos);
  //    Servoback8.write(36 - (pos));
  //    delay(10);
  //  }
  //  Serial.println("Step-7");
  //  delay(500);
  //
  //  for (pos = 0; pos <= 35; pos++)
  //  {
  //    Servoback7.write(90 + pos);
  //    Servoback8.write(1 + (pos));
  //    delay(10);
  //  }
  //  Serial.println("Step-8");
  //  //  delay(1200);
  //  delay(10);


}
