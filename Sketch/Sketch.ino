int first;
int second;
int third;
#include <Servo.h>
Servo myservo;
int pos=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  myservo.attach(6);
  pinMode(7,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  
first = digitalRead(2);
second = digitalRead(3);
third = digitalRead(4);


//1 
if (first == HIGH && second == HIGH && third == HIGH){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=10) // open the door
myservo.write(pos);  
delay(2000);
}
//2 
else if (first == HIGH && second == HIGH && third == LOW){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=5) // open the door
myservo.write(pos); 
delay(2000);
}

//3 
else if (first == HIGH && second == LOW && third == HIGH){
  digitalWrite(5,HIGH);
  for(pos = 180; pos>=0; pos-=5) // close the door
myservo.write(pos); 
tone( 7, 2000, 500);
tone( 7, 1000, 500);
delay(2000);
}

//4
else if (first == HIGH && second == LOW && third == LOW){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=5) // open the door
myservo.write(pos); 
delay(2000);
}
//5
else if (first == LOW && second == HIGH && third == HIGH){
  digitalWrite(5,HIGH);
  for(pos = 180; pos>=0; pos-=5) //close the door
myservo.write(pos); 
tone( 7, 2000, 500);
tone( 7, 1000, 500);
delay(2000);
}
//6
else if (first == LOW && second == HIGH && third == LOW){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=5) // open the door
myservo.write(pos); 
delay(2000);
}
//7
else if (first == LOW && second == LOW && third == HIGH){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=5) // open the door
myservo.write(pos); 
delay(2000);
}
//8
else if (first == LOW && second == LOW && third == LOW){
  digitalWrite(5,LOW);
  for(pos = 0; pos <= 180; pos +=5) // open the door
myservo.write(pos); 
delay(2000);
}

}
