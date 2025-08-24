#include "SR04.h"
#include "pitches.h"

#define TRIG_PIN 12
#define ECHO_PIN 10
#define BLUE 6
#define GREEN 5
#define RED 9

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   pinMode(BLUE, OUTPUT);
   pinMode(GREEN, OUTPUT);
   pinMode(RED, OUTPUT);
   
}

void loop() {

  if (a < 100) {
 tone(8, NOTE_D5, 250);}

 for(int i=0; i<3; i++) {
   a=sr04.Distance();
  
   
 if (a > 50) {
  analogWrite(GREEN, 100);
  analogWrite(RED, 0);
 }

 if (a < 50 && a > 25) {
  analogWrite(RED, 100);
  analogWrite(GREEN, 25);
 }

 if (a < 25) {
  analogWrite(RED, 100);
  analogWrite(GREEN, 0);
 }
if (a < 100) {
 delay(a*2.5);}
 }
}
