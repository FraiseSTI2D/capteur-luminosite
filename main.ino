int valeurCapteur=0;
void setup()
{
    pinMode(A0,INPUT);
    Serial.begin(9600);
}
void loop 
{
    valeurCapteur = analoogRead(A0);
    Serial.pringtln(valeurCapteur);
    if(valeurCapteur>=800)
    {
    }
    else
    {
    }
    delay(100);
}
