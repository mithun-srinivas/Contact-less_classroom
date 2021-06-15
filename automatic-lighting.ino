int led1 = 4;
int sensor1 = 5;
int led2 = 6;
int sensor2 = 7;
int led3 = A0 ;
int sensor3 = A1;
int led4 = A2 ;
int sensor4 = A3;
  
  
void setup() {
  // put your setup code here, to run once:
 
  pinMode(led1, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(sensor2, INPUT);
  pinMode(led3, OUTPUT);
  pinMode(sensor3, INPUT);
  pinMode(led4, OUTPUT);
  pinMode(sensor4, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 
  
  int sensor1val = digitalRead(sensor1);
  if(sensor1val == HIGH){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);}
  
  int sensor2val = digitalRead(sensor2);
  if(sensor2val == HIGH){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);}
  
  int sensor3val = digitalRead(sensor3);
  if(sensor3val == HIGH){
    digitalWrite(led3,HIGH);
  }else{
    digitalWrite(led3,LOW);}
  
  int sensor4val = digitalRead(sensor4);
  if(sensor4val == HIGH){
    digitalWrite(led4,HIGH);
  }else{
    digitalWrite(led4,LOW);}
  
  
  

}
