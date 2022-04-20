const char EntreeAna = A2;
float E=0;

void setup()
{
    pinMode(13, OUTPUT);
    Serrial.begin(9600);
}

void loop()
{
    int ValeurLue= analogRead(EntreeAna);
    Serrial.print("Valeur CAN=  ");
    Serrial.println(ValeurLue);
    E=9*ValeurLue-138;
    Serrial.print("Eclairement = ");
    Serrial.println(E);
    if (E < 1000)
    {
        digitalWrite(13,HIGH);
    }
    if (E > 2000)
    {
        digitalWrite(13,LOW);
    }
    delay(1000);
}