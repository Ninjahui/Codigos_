const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=6;
const int led6=7;
const int led7=11;
const int led8=12;
const int led9=13;
const int led10=14;
const int botao1= 8;
const int botao2= 9;
const int botao3= 10;
const int botao4= 11;
const int botao5= 12;
const int botao6= 13;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT);
  pinMode(botao6, INPUT);
  Serial.begin(9600);
  
}

void loop()
{

  if(digitalRead(botao1) == HIGH){
    anima1 ();
  		}
  if(digitalRead(botao2) == HIGH){
    anima2 ();
  		}
  if(digitalRead(botao3) == HIGH){
  	apagatudo ();
  		}
}



void apagatudo (){
 	digitalWrite(led1, HIGH);
  	delay(20);
  	digitalWrite(led2, HIGH);
  delay(40);
 	digitalWrite(led3, HIGH);
  delay(60);
  	digitalWrite(led4, HIGH);
  delay(80);
  	digitalWrite(led5, HIGH);
  delay(100);  
  	digitalWrite(led6, HIGH);
  delay(120);
  	digitalWrite(led7, HIGH);
  delay(140);
 	digitalWrite(led8, HIGH);
  delay(160);
  	digitalWrite(led9, HIGH);
  delay(180);
  	digitalWrite(led10, HIGH);
  delay(200);
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  	digitalWrite(led5, LOW);
  	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
 	digitalWrite(led8, LOW);
	digitalWrite(led9, LOW);
  	digitalWrite(led10, LOW);
}

void anima1 (){
	digitalWrite(led1, HIGH);
  delay(200);
 	digitalWrite(led2, HIGH);
  delay(200);
  	digitalWrite(led3, HIGH);
  delay(200);
  	digitalWrite(led4, HIGH);
  delay(200);
	digitalWrite(led5, HIGH);
  delay(200);
  	digitalWrite(led6, HIGH);
  delay(200);
 	digitalWrite(led7, HIGH);
  delay(200);
  	digitalWrite(led8, HIGH);
  delay(200);
  	digitalWrite(led9, HIGH);
  delay(200);
	digitalWrite(led10, HIGH);
  delay(200);
  	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  	digitalWrite(led5, LOW);
  	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
 	digitalWrite(led8, LOW);
	digitalWrite(led9, LOW);
  	digitalWrite(led10, LOW);
  delay(50);
  	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
 	digitalWrite(led3, HIGH);
	digitalWrite(led4, HIGH);
  	digitalWrite(led5, HIGH);
  	digitalWrite(led6, HIGH);
	digitalWrite(led7, HIGH);
 	digitalWrite(led8, HIGH);
	digitalWrite(led9, HIGH);
  	digitalWrite(led10, HIGH);
  delay(50);
  digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  	digitalWrite(led5, LOW);
  	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
 	digitalWrite(led8, LOW);
	digitalWrite(led9, LOW);
  	digitalWrite(led10, LOW);
  delay(50);
  	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
 	digitalWrite(led3, HIGH);
	digitalWrite(led4, HIGH);
  	digitalWrite(led5, HIGH);
  	digitalWrite(led6, HIGH);
	digitalWrite(led7, HIGH);
 	digitalWrite(led8, HIGH);
	digitalWrite(led9, HIGH);
  	digitalWrite(led10, HIGH);
  delay(50);
  digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  	digitalWrite(led5, LOW);
  	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
 	digitalWrite(led8, LOW);
	digitalWrite(led9, LOW);
  	digitalWrite(led10, LOW);
  delay(50);
  	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
 	digitalWrite(led3, HIGH);
	digitalWrite(led4, HIGH);
  	digitalWrite(led5, HIGH);
  	digitalWrite(led6, HIGH);
	digitalWrite(led7, HIGH);
 	digitalWrite(led8, HIGH);
	digitalWrite(led9, HIGH);
  	digitalWrite(led10, HIGH);
  
}
void anima2 (){
	digitalWrite(led2, HIGH);
  	delay(15);
	digitalWrite(led4, HIGH);
  delay(15);
  	digitalWrite(led6, HIGH);
  delay(15);
	digitalWrite(led8, HIGH);
  delay(15);
  	digitalWrite(led10, HIGH);
  	delay(200);
  	digitalWrite(led1, HIGH);
  delay(15);
	digitalWrite(led3, HIGH);
  delay(15);
  	digitalWrite(led5, HIGH);
  delay(15);
	digitalWrite(led7, HIGH);
  delay(15);
  	digitalWrite(led9, HIGH);
  delay(15);
}
