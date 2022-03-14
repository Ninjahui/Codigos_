void setup()
{
  pinMode(8, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{

  if(digitalRead(8) == HIGH){
 	Serial.println("Do");
    delay(100);
  }
  if(digitalRead(2) == HIGH){
 	Serial.println("Re");
    delay(100);
  }
  if(digitalRead(3) == HIGH){
 	Serial.println("Mi");
    delay(100);
  }
  if(digitalRead(4) == HIGH){
 	Serial.println("Fa");
    delay(100);
  }
  if(digitalRead(5) == HIGH){
 	Serial.println("Sol");
    delay(100);
  }
  if(digitalRead(6) == HIGH){
 	Serial.println("La");
    delay(100);
  }
  if(digitalRead(7) == HIGH){
 	Serial.println("Si");
    delay(100);
  }
}