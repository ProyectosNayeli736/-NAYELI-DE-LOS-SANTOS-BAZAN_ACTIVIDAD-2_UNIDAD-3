int gas;
int piezo = 13; //igualamos al pin digital
void setup()
{
pinMode (A0,INPUT); //entrada
pinMode (piezo, OUTPUT); //salida
}

void loop()
{
 gas = analogRead(A0);
  if (gas>=600) //igualamos al limite del sensor
    {
    tone(piezo, 523,200);
    delay(500);
  }
}
