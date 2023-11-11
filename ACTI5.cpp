#include <Servo.h>

Servo monservo;

const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;
int brochepot = A0;
int valeur;
int val_pot;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  monservo.attach(3);
}   

void loop() 
    {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);

    val_pot = analogRead(brochepot);
    valeur = map(val_pot, 0, 1023, 0, 180);
    monservo.write(valeur);

    if(valeur > 1) digitalWrite(LED1, HIGH);
    if(valeur > 36) digitalWrite(LED2, HIGH);
    if(valeur > 72) digitalWrite(LED3, HIGH);
    if(valeur > 108) digitalWrite(LED4, HIGH);
    if(valeur > 144) digitalWrite(LED5, HIGH);

    delay(15);
    }