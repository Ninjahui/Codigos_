  const int buttonPin = 2;

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{

  
  if(digitalRead(buttonPin) == HIGH){
 	digitalWrite(1, LOW);
  }else{
   digitalWrite(1, HIGH);
  }
}