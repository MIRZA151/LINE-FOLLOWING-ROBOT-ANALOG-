#define LeftMotorForward 2
#define LeftMotorBackward 3
#define RightMotorForward 4
#define RightMotorBackward 5 

#define leftIR A0
#define rightIR A1

void setup() {
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT) ;
  pinMode(LeftMotorBackward, OUTPUT) ;
  pinMode(RightMotorBackward, OUTPUT) ;
  pinMode(leftIR,INPUT) ;
  pinMode(rightIR, INPUT) ;

  Serial.begin(9600) ;

}

void loop() {
  if (analogRead(leftIR)<500 && analogRead(rightIR) <500) //Forward
  {
   analogWrite(LeftMotorForward, 150) ;
   analogWrite(RightMotorForward, 150);
}
 else if (analogRead(leftIR) < 500 && analogRead(rightIR) >= 500) //Right
 {
  analogWrite(LeftMotorForward, 130) ;
  analogWrite(RightMotorForward, LOW) ;
 }
 else if (analogRead(leftIR) >=500 && analogRead(rightIR) >=500) //Left
 {
  analogWrite(LeftMotorForward, LOW) ;
  analogWrite(RightMotorForward, 130);
 }

 else if (analogRead(leftIR) >=500 && analogRead(rightIR) >=500) //Stop
 {
  analogWrite(LeftMotorForward, LOW) ;
  analogWrite(RightMotorForward, LOW);
 }
 delay(1);
}
 
