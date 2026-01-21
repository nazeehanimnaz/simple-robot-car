// Define all the pins of the motor driver module L298N
#define enaPin 3
#define in1 5
#define in2 6
#define in3 9
#define in4 10
#define enbPin 11

void setup() {

  // Define if pins are input or output
  pinMode(enaPin, OUTPUT);
  pinMode(enbPin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {

  Forward();
  delay(2000);  //move forward for 2 seconds
  Backward();
  delay(2000);  //move backward for 2 seconds
  Left();
  delay(2000);  //move left for 2 seconds
  Right();
  delay(2000);  //move right for 2 seconds
  Stop();
  delay(2000);  //stop for 2 seconds
}

// FUNCTIONS TO CHANGE THE DIRECTION OF THE WHEELS
void Backward() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

 void Forward() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}

 void Stop() {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void Right() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}

void Left() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

