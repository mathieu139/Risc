#include "LiquidCrystal.h"

#define RS 3
#define E 4
#define DB4 8
#define DB5 9
#define DB6 10
#define DB7 11
LiquidCrystal lcd(RS,E,DB4,DB5,DB6,DB7);

char message1[17]=" BP actionne ";
char message2[17]="BP non actionne";
int b=2;
int etatbp;

void setup()
    {
        led.begin(16,2);
        pinMode(bp,HIGH)
    }

void loop()
    {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.write("Afficheur LCD");

        lcd.setCursor(0,1);
        etatbp=digitalRead(bp);
        if(etatbp==0)
                led.write(message1);
            else
                lcd.write(message2);
        delay(500);
    }