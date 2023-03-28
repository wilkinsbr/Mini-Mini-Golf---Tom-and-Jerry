#include <Servo.h>

Servo myservo1;  // Spinner Servo
Servo myservo2;	 // Tom Servo

int posA = 0;    // Storing the servo positions - Spinner
int posB = 0;	 // Storing the servo positions - Tom

void setup() {
  myservo1.attach(9);   //Spinner Servo Pin 9
  myservo2.attach(10);	//Tom Servo pin 10
}

void loop() {
  
  //Spinner - Forward
  for (posA = 0; posA <= 180; posA += 5) { // 180 Degree Spin // 5 Degree Steps
    myservo1.write(posA);                  
    delay(15);                             // 15 ms Delay
  }
  
    
  //Tom - Forward
  for (posB = 0; posB <= 45; posB += 2) { // 90 degree spin // 1 Degree Steps
    myservo2.write(posB);              	 
    delay(15);							              // 15 ms Delay
  }
  
  
  //Spinner - Back
  for (posA = 180; posA >= 0; posA -= 5) { // 180 Degree Spin // 5 Degree Steps
    myservo1.write(posA);                  
    delay(10);                       	   // 10 ms Delay
  }

  
  //Tom - Back
  for (posB = 45; posB >= 0; posB -= 2) { // 90 degree spin
    myservo2.write(posB);              	  
    delay(15);                       	  // 15 ms Delay
  }
  
  
} 