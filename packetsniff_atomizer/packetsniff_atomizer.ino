#include <Servo.h>

Servo myservo_1;  // create servo object to control a servo
Servo myservo_2;
Servo myservo_3;
// twelve servo objects can be created on most boards
int pos = 0;    // variable to store the servo position
int newPos;
int oldPos = 0;
int incPos = 30;
void atomizer1_press();
void atomizer2_press();
void atomizer3_press();

const unsigned long interval = 5000;
unsigned long previousTime;
int state;

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600); // Starting Serial Terminal
   myservo_1.write(0);
   myservo_1.attach(13);
   myservo_2.write(0);
   myservo_2.attach(12);
   myservo_3.write(0);  
   myservo_3.attach(11); 
}

void loop() {
  atomizer1_press();
  atomizer2_press();
  atomizer3_press();
}

void atomizer1_press() {
  for (pos = 0; pos <= 45; pos += 2) { // goes from 0 degrees to 180 degrees, in steps of 1 degree
    myservo_1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 45; pos >= 0; pos -= 2) { // goes from 180 degrees to 0 degrees
    myservo_1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  delay(300);
  Serial.println("atomizer1");
}

void atomizer2_press() {
  for (pos = 0; pos <= 30; pos += 2) { // goes from 0 degrees to 180 degrees, in steps of 1 degree
    myservo_2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 30; pos >= 0; pos -= 2) { // goes from 180 degrees to 0 degrees
    myservo_2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  delay(300);
  Serial.println("atomizer2");
}

void atomizer3_press() {
  for (pos = 0; pos <= 42; pos += 2) { // goes from 0 degrees to 180 degrees, in steps of 1 degree
    myservo_3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 42; pos >= 0; pos -= 2) { // goes from 180 degrees to 0 degrees
    myservo_3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  delay(300);
  Serial.println("atomizer3");
}
