#include<Servo.h>
int echoPin = 11;
int trigPin = 12;
int sensor = A0;
Servo Myservo;
Servo Myservo1;

int long duration;
int distance;
void setup(){ 
Myservo.attach(3);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
  
pinMode(sensor, INPUT);
Myservo1.attach(A1);

}

void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(2); 
digitalWrite(trigPin,HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration*0.034/2);
  
  
if(distance<=80){
  Myservo.write(180);

}
else {
  Myservo.write(0);

}
  delay(100);
  
  int sensorval = digitalRead(sensor);
  if(sensorval == HIGH){
    Myservo1.write(180);
  }else{
    Myservo1.write(0);}
  delay(5000);

}
