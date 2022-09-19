//#include <Servo.h>
#include <ESP32Servo.h>

Servo ServoUpper;

Servo ServoLower;

int ServoUpper_pos = 0;

void setup() {
  ServoUpper.attach(19);
  ServoLower.attach(18);

  Serial.begin(9600);
}

void loop() {

  int ServoUpper_pos = 100 ;
  int ServoLower_pos = 80;

//  ServoLower.write(ServoLower_pos );
//  ServoUpper.write(ServoUpper_pos);

  
  for (ServoLower_pos = 100; ServoLower_pos <= 160; ServoLower_pos += 1) {

    ServoLower.write(ServoLower_pos );
    delay(10);
  }
  Serial.println("Movement 1 - Servo lower: 100-160");
  delay(10);

  for (ServoUpper_pos = 80; ServoUpper_pos >=30 ; ServoUpper_pos -= 1) {
    ServoUpper.write(ServoUpper_pos);
    delay(10);
  }
  Serial.println("Movement 2 - Servo upper: 80-30 ");
  delay(10);


  for (ServoLower_pos = 160 ; ServoLower_pos >=100; ServoLower_pos -= 1) {
    ServoLower.write(ServoLower_pos );
    delay(10);
  }

  Serial.println("Movement 3 - Servo lower: 160-100");
  delay(10);



  for (ServoUpper_pos = 30; ServoUpper_pos <=80; ServoUpper_pos += 1) {
    ServoUpper.write(ServoUpper_pos);
    delay(10);
  }
  Serial.println("Movement 4 - Servo upper: 30-80");
  delay(3000);


}
