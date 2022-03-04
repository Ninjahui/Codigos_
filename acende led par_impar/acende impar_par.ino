int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int botao1= 8;
int botao2= 9;
int botao3= 10;
int botao4= 11;
int botao5= 12;
int botao6= 13;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
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
    acendeIM ();
    Serial.println("botao 1 apertado");
  		}
  if(digitalRead(botao2) == HIGH){
    acendePA ();
    Serial.println("botao 2 apertado");
  		}
  if(digitalRead(botao3) == HIGH){
  	apagatudo ();
    Serial.println("botao 3 apertado");
  		}
}



void apagatudo (){
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  	digitalWrite(led5, LOW);
}

void acendeIM (){
	digitalWrite(led1, HIGH);
 	digitalWrite(led3, HIGH);
  	digitalWrite(led5, HIGH);
}
void acendePA (){
	digitalWrite(led2, HIGH);
	digitalWrite(led4, HIGH);
}
