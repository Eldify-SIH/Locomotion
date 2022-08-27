#include <ESP32Servo.h>

#define front1 16
#define front2 17
#define front3 18
#define front4 19

Servo Servofront1;
Servo Servofront2;
Servo Servofront3;
Servo Servofront4;

void setup()
{
  Serial.begin(9600);
  Servofront1.attach(front1);
  Servofront2.attach(front2);
  Servofront3.attach(front3);
  Servofront4.attach(front4);

}


void loop()
{
  //    HCPCA9685.Servo(8, Pos);
  Serial.println("Start of loop!");
  int pos = 0;

  for ( pos = 55; pos > 25; pos--)
  {
    Servofront2.write(pos);
    delay(10);
  }
  Serial.println("55 --> 25");
  delay(10);

  for ( pos = 70; pos < 90 ; pos++)
  {
    Servofront1.write(pos);
    delay(10);
  }
  Serial.println("70 --> 90");
  delay(10);

  for ( pos = 25; pos < 55; pos++)
  {
    Servofront2.write(pos);
    delay(10);
  }
  Serial.println("25 --> 55");
  delay(10);

  for ( pos = 90; pos > 70; pos--)
  {
    Servofront1.write(pos);
    delay(10);
  }
  Serial.println("90 --> 70");
  delay(10);

  for ( pos = 125; pos < 145; pos++)
  {
    Servofront4.write(pos);
    delay(10);
  }
  Serial.println("125 --> 145");
  delay(10);

  for ( pos = 110; pos > 90; pos--)
  {
    Servofront3.write(pos);
    delay(10);
  }
  Serial.println("110 --> 90");
  delay(10);

  for ( pos = 145; pos > 125; pos--)
  {
    Servofront4.write(pos);
    delay(10);
  }
  Serial.println("145 --> 125");
  delay(10);

  for ( pos = 90; pos < 110; pos++)
  {
    Servofront4.write(pos);
    delay(10);
  }
  Serial.println("90 --> 110");
  delay(2000);
}

void incServoLoop(Servo servoM, int minVal, int maxVal)
{
  int pos = minVal;
  for ( pos = minVal; pos < maxVal ; pos++)
  {
    servoM.write(pos);
    delay(10);
  }
}

void decServoLoop(Servo servoM, int minVal, int maxVal)
{

  int pos = maxVal;
  for ( pos = maxVal; pos > minVal; pos--)
  {
    servoM.write(pos);
    delay(10);
  }
}
