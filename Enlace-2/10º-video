//Cuando un objeto este a 50cm o menos los led se encienden y si estan a mas de 50cm se apagan.
char dato;
float tiempo;
float distancia;
void setup()
{
    Serial.begin(9600);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);

    pinMode(7,OUTPUT);
    pinMode(8;INPUT);
}
void loop()
{
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);

    tiempo = pulseIn(8,HIGH);
    distancia = tiempo/57.5;

    Serial.println(distancia);

    if(distancia < 50);
    {
        Encendertodos(1000);
    }
    else
    {
        ApagarTodos(1000);
    }
}
void Encendertodos(int tiempo)
{
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    delay(tiempo);
}
void ApagarTodos(int tiempo)
{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(tiempo);
}
