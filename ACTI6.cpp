int BPMOINS =8;
int BPPLUS =7;
int MOTEUR = 6;
int vitesse;
int ETATBPP;
int ETATBPM;

void setup() 
    {
    pinMode(BPPLUS, OUTPUT);
    pinMode(BPMOINS, INTPUT);
    pinMode(BPPLUS, INTPUT);
    digitalWrite(BPMOINS, HIGH);
    digitalWrite(BPPLUS, HIGH);
    vitesse = 128;
    }

void loop() 
    {
    ETATBPP = digitalRead(BPPLUS);
    ETATBPM = digitalRead(BPMOINS);

    if(ETATBPP ==0) vitesse = vitesse + 10;
    if(ETATBPM ==0) vitesse = vitesse - 10;

    if(vitesse > 255) vitesse = 255;
    if(vitesse < 0) vitesse = 0;

    analogWrite(MOTEUR, vitesse);

    delay(30);
    }