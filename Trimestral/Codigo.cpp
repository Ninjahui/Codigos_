const int red = 2;
const int ver = 4;
const int azu = 3;

const int bot1 = 5;
const int bot2 = 6;

int contagem;

const int mP = 5;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(ver, OUTPUT);
  pinMode(azu, OUTPUT);
  
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(bot1)==HIGH){
  contagem++;  
    Serial.println(contagem);
    delay(300);
  }
  if(digitalRead(bot2)==HIGH){
  contagem = 0;
    Serial.println(contagem);
    delay(300);
  }
  
  if(contagem < 5){
  digitalWrite(ver, HIGH);
    digitalWrite(red,LOW);
  }else{
  digitalWrite(ver,LOW);
   digitalWrite(red,HIGH);
  }
}