//Si cualquier numero es menor que 3 se enciende y se apaga, pero si es mayor que 3 se queda encendido.
void setup()
{
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
}
void loop()
{
    if(3>4)
    {
    Encendertodos(1000);
    ApagarTodos(500);
    }
    else
    {
        Encendertodos(100000000000000);
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