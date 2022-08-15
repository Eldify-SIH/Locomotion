//#include <Servo.h>
#include <ESP32Servo.h>

Servo ServoRightUpper;

Servo ServoRightLower;
Servo ServoLeftUpper;

Servo ServoLeftLower;
int ServoRightUpper_pos = 0;

void setup() {
  ServoRightUpper.attach(18);
  ServoRightLower.attach(19);
  ServoLeftUpper.attach(16);
  ServoLeftLower.attach(17);

  Serial.begin(9600);
}

void loop() {

  int ServoRightUpper_pos = 90 ;
  int ServoRightLower_pos = 30;
  int ServoLeftUpper_pos = 60;
  int ServoLeftLower_pos = 130;


  ServoRightLower.write(ServoRightLower_pos );
  Serial.println("Movement 1 - Servo lower: 100-160");

  ServoRightUpper.write(ServoRightUpper_pos);
  Serial.println("Movement 2 - Servo upper: 80-30 ");

  ServoLeftLower.write(ServoLeftLower_pos );
  Serial.println("Movement 4 - Servo lower: 50-0");

  ServoLeftUpper.write(ServoLeftUpper_pos);
  Serial.println("Movement 6 - Servo upper: 90-135");

}
