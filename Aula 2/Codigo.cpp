const int botao1 = 2;
const int botao2 = 3;


int var1;
int var2;
  
 void setup()
 { 
    pinMode(botao1, INPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
  	pinMode(botao2, INPUT); 
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){
     Serial.println("botao 1 apertado");
     digitalWrite(4, HIGH);
   }
   if(!var2){
     Serial.println("botao 2 apertado");
      digitalWrite(5, HIGH);
   }
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
 }