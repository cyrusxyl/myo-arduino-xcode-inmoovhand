#include<Servo.h>

Servo Thumb, Index, Middle, Ring, Pinky;
//char specifier;
//int input;
char t,i,m,r,p;
int tt = 90;
int ii = 90;
int mm = 90;
int rr = 90;
int pp = 90;

void setup() {
  Serial.begin(9600);
  Thumb.attach(5);
  Index.attach(6);
  Middle.attach(9);
  Ring.attach(10);
  Pinky.attach(11);
}  

void loop() {
  if(Serial.available())
  {  
    t = Serial.read();
    i = Serial.read();
    m = Serial.read();
    r = Serial.read();
    p = Serial.read();

    if(t=='c') {
      tt = 30;
    } else {
      tt = 100;
    }

    if(i=='c') {
      ii = 0;
    } else {
      ii = 90;
    }

    if(m=='c') {
      mm = 0;
    } else {
      mm = 130;
    }

    if(r=='c') {
      rr = 0;
    } else {
      rr = 90;
    }

    if(p=='c') {
      pp = 0;
    } else {
      pp = 90;
    }
  }
  Thumb.write(tt);
  Index.write(ii);
  Middle.write(mm);
  Ring.write(rr);
  Pinky.write(180-pp);
  delay(100); 
}
