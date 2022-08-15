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
  int ServoLeftUpper_pos = 60 ;
  int ServoLeftLower_pos = 130;

  for (ServoRightLower_pos = 30; ServoRightLower_pos >=0; ServoRightLower_pos -= 1) {

    ServoRightLower.write(ServoRightLower_pos );
    delay(10);
  }
  Serial.println("Movement 1 - Servo lower: 100-160");
  delay(10);

  for (ServoRightUpper_pos = 90; ServoRightUpper_pos <= 110 ; ServoRightUpper_pos += 1) {
    ServoRightUpper.write(ServoRightUpper_pos);
    delay(10);
  }
  Serial.println("Movement 2 - Servo upper: 80-30 ");
  delay(10);


  for (ServoRightLower_pos = 0 ; ServoRightLower_pos <= 30; ServoRightLower_pos += 1) {
    ServoRightLower.write(ServoRightLower_pos );
    delay(10);
  }
  Serial.println("Movement 3 - Servo lower: 160-100");
  delay(10);

  for (ServoLeftLower_pos = 130 ; ServoLeftLower_pos <=150; ServoLeftLower_pos += 1) {
    ServoLeftLower.write(ServoLeftLower_pos );
    delay(10);
  }

  Serial.println("Movement 4 - Servo lower: 50-0");
  delay(10);


  for (ServoRightUpper_pos = 110; ServoRightUpper_pos >=90; ServoRightUpper_pos -= 1) {
    ServoRightUpper.write(ServoRightUpper_pos);
    delay(10);
  }
  Serial.println("Movement 5 - Servo upper: 30-80");
  delay(10);


  for (ServoLeftUpper_pos = 60; ServoLeftUpper_pos <= 80; ServoLeftUpper_pos += 1) {
    ServoLeftUpper.write(ServoLeftUpper_pos);
    delay(10);
  }
  Serial.println("Movement 6 - Servo upper: 90-135");
  delay(10);


  for (ServoLeftLower_pos = 150; ServoLeftLower_pos >= 130; ServoLeftLower_pos -= 1) {
    ServoLeftLower.write(ServoLeftLower_pos );
    delay(10);
  }

  Serial.println("Movement 7 - Servo lower:0-50");
  delay(10);

  for (ServoLeftUpper_pos = 80; ServoLeftUpper_pos >= 60; ServoLeftUpper_pos -= 1) {
    ServoLeftUpper.write(ServoLeftUpper_pos);
    delay(10);
  }
  Serial.println("Movement 8 - Servo upper: 135-90");
  delay(10);


}
