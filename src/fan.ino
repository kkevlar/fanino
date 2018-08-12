
void setup() {
  pinMode(A2,OUTPUT);

  digitalWrite(A2,LOW);
  
  delay(10000);

  digitalWrite(A2,HIGH);

  for(int i = 0; i < 120; i++)
  {
   delay(60000);
  }
  
  digitalWrite(A2,LOW);

}

void loop() {
delay(1000);
  
}

