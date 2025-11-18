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
  delay(2000);
  Backward();
  delay(2000);
  Left();
  delay(2000);
  Right();
  delay(2000);
  Stop();
  delay(2000);
}

// FUNCTIONS TO CHANGE THE DIRECTION OF THE WHEELS
void Backward() {
  analogWrite(enaPin,180);
  analogWrite(enbPin,180);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

 void Forward() {
  analogWrite(enaPin,180);
  analogWrite(enbPin,180);
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

