void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{

  
  if(digitalRead(2) == HIGH){
 	Serial.println("Botão 5 foi apertado");
    delay(100);
  }
  if(digitalRead(3) == HIGH){
 	Serial.println("Botão 4 foi apertado");
    delay(100);
  }
  if(digitalRead(4) == HIGH){
 	Serial.println("Botão 3 foi apertado");
    delay(100);
  }
  if(digitalRead(5) == HIGH){
 	Serial.println("Botão 2 foi apertado");
    delay(100);
  }
  if(digitalRead(6) == HIGH){
 	Serial.println("Botão 1 foi apertado");
    delay(100);
  }
}