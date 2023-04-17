// C++ code
//
int botao = 2;
int estado_botao;

void setup(){
  
  pinMode(12, OUTPUT); //Led VERMELHO
  pinMode(11, OUTPUT); //Led AMARELO
  pinMode(10, OUTPUT); //Led VERDE
  pinMode(9, OUTPUT); //Led VERMELHO do pedestre
  pinMode(8, OUTPUT); //Led VERDE do pedestre
  pinMode(botao, INPUT); //Botão
    
}

void loop()
{
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  
  //Ler estado do botão
  estado_botao = digitalRead(botao);

  //Verificar se o botão está ligado
  if(estado_botao == HIGH){
    
    //Apagar led Verde 
    delay(1000);
    digitalWrite(10, LOW);
    
    //Acender e apagar led Amarelo
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
    delay(1000);
    
    //Acender led Vermelho
    digitalWrite(12, HIGH);
    
    //Apagar led Vermelho do pedestre
    digitalWrite(9, LOW);
    
    //Acender led Verde do pedestre
    digitalWrite(8, HIGH);
    delay(6000);
    //Piscando led Verde do pedestre
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
    digitalWrite(8, HIGH);
    delay(500);
    
    //Apagar led Verde do pedestre
    digitalWrite(8, LOW);
    delay(1000);
    
    //Apagar led Vermelho
    digitalWrite(12, LOW);
    delay(1000);
    
    //Acender led Vermelho do pedestre
    digitalWrite(9, HIGH);
    
    //Acender led Verde
    digitalWrite(10, HIGH);
  }
        
}