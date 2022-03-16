int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;

const int pot = 0;
  int var = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
var = analogRead(pot);
  Serial.println(var);
	delay(200);
  
  if(var > 204){
  digitalWrite(led1, HIGH);
  }else{
  digitalWrite(led1, LOW);
  }
  if(var > 408){
  digitalWrite(led2, HIGH);
  }else{
  digitalWrite(led2, LOW);
  }
  if(var > 612){
  digitalWrite(led3, HIGH);
  }else{
  digitalWrite(led3, LOW);
  }
  if(var > 816){
  digitalWrite(led4, HIGH);
  }else{
  digitalWrite(led4, LOW);
  }
  if(var > 1000){
  digitalWrite(led5, HIGH);
  }else{
  digitalWrite(led5, LOW);
  }
}