//Se enciende un led y cuando se apaga se enciende otro asi en bucle.
int LedRojo=12;
int LedAzul=11;
int LedAmarillo=10;
void setup()
{
    pinMode(LedRojo,OUTPUT);
    pinMode(LedAzul,OUTPUT);
    pinMode(LedAmarillo,OUTPUT);
}
void loop()
{
    digitalWrite(LedRojo,HIGH);
    delay(300),
    digitalWrite(LedRojo,LOW);
    delay(300);
    digitalWrite(LedAzul,HIGH);
    delay(300);
    digitalWrite(LedAzul,LOW);
    delay(300);
    digitalWrite(LedAmarillo,HIGH);
    delay(300);
    digitalWrite(LedAmarillo,LOW);
    delay(300);
}
