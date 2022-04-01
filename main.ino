int valeurCapteur=0;
long momentAVANT= 0;
long momentPRESENT;
int etatLUMI= LOW;
void setup()
{
    pinMode(A0,INPUT);
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}
void loop 
{
    momentAVANT= millis();
    if (momentPRESENT-momentAVANT> 10000);
    {
        momentAVANT = momentPRESENT;
        if (etatLUMI == LOW)
        {
            etatLUMI = HIGH;
        }
    }
    else 
    {
        etatLUMI = LOW;
    }
    digitalWrite(13, etatLUMI);
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
