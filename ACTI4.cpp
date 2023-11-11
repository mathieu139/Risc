#include "LiquidCrystal.h"

#define RS 3
#define E 4
#define DB4 8
#define DB5 9
#define DB6 10
#define DB7 11
LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);

char message[17] = "        00";
int compteur = 0;
int bp = 2;
int etabp;

void setup() {
  lcd.begin(16, 2);
  pinMode(bp, INPUT);
  digitalWrite(bp, HIGH);
}

void loop()
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Compteur : ");

    etatbp = digitalRead(bp);
    if (etatbp == 0)
            {if(compteur < 99)compteur++;}
       else 
            {if(compteur > 0)compteur--;}

    message[14]=((compteur+(compteur/10)*6)&0x0F)+0x30;
    message[13]=(((compteur+(compteur/10)*6)&0x0F)/0x10)+0x30;
    led.setCursor(0, 1);
    led.write(message);
    delay(500);
  }