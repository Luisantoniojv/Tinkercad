//Si enviamos letra 'p' se enciende los led, si enviamos la letra 'w' los led se apagan y si enviamos la letra 'v' se encinde y se apaga en bucle.
char valor;
void setup()
{
    Serial.begin(9600);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}
void loop()
{
    if(Serial.available())
    {
        valor = Serial.read();
        Serial.println(valor);
     if(valor =='p')
     {
        Encendertodos(1000);
     }
     if(valor =='w')
     {
        ApagarTodos(500);
     }
     if(valor =='v')
     {
        Encendertodos(1000);
        ApagarTodos(100);
        Encendertodos(1000);
        ApagarTodos(100);
     }
    }
}
void Encendertodos(int tiempo)
{
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    delay(tiempo);
}
void ApagarTodos(int tiempo)
{
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(tiempo);
}