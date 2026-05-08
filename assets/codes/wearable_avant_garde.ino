
#include <Servo.h>

Servo servo1;
Servo servo2;

const int sensorPin = 3;

void setup() {
  pinMode(sensorPin, INPUT);

  servo1.attach(4);
  servo2.attach(5);

  servo1.write(0);
  servo2.write(0);
}

void loop() {
  int sensorState = digitalRead(sensorPin);

  if(sensorState == HIGH) {

    servo1.write(180);
    servo2.write(180);

    delay(1500);

    servo1.write(0);
    servo2.write(0);

    delay(1000);
  }
}
