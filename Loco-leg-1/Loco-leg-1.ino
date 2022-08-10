//#include <Servo.h>
#include <ESP32Servo.h>

Servo servo1;

Servo servo2;

int servo1_pos = 0;

void setup() {
  servo1.attach(19);
  servo2.attach(18);

  Serial.begin(9600);
}

void loop() {

  int servo1_pos = 100 ;
  int servo2_pos = 80;


  for (servo2_pos = 100; servo2_pos <= 150; servo2_pos += 1) {

    servo2.write(servo2_pos );
    delay(10);
  }
  Serial.println("Movement 1 - Servo 2: 100-150");
  delay(10);

  for (servo1_pos = 80; servo1_pos <= 120 ; servo1_pos += 1) {
    servo1.write(servo1_pos);
    delay(10);
  }
  Serial.println("Movement 2 - Servo 1: 80-120 ");
  delay(10);


  for (servo2_pos = 150 ; servo2_pos >= 100; servo2_pos -= 1) {
    servo2.write(servo2_pos );
    delay(10);
  }

  Serial.println("Movement 3 - Servo 2: 150-100");
  delay(10);



  for (servo1_pos = 120; servo1_pos >= 80; servo1_pos -= 1) {
    servo1.write(servo1_pos);
    delay(10);
  }
  Serial.println("Movement 4 - Servo 1: 120-80");
  delay(500);


}
