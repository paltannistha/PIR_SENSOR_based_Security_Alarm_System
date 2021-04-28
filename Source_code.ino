int pir = 3;
int siren =4;
void setup() 
{
  pinMode(pir,INPUT);
  pinMode(siren,OUTPUT);

  digitalWrite(siren,LOW);

      delay(8000);

}

void loop() 
{
  if(digitalRead(pir))
  {
    digitalWrite(siren,HIGH);
    delay(10000);
    digitalWrite(siren,LOW);
    while(digitalRead(pir));
  }
  
}