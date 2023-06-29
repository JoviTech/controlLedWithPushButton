#define button1 8
#define button2 9
#define ledVermelho 10
#define ledAmarelo 11
#define ledVerde 6
#define ledBranco 3


void setup() 
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int leftButton = digitalRead(button1);
  int rightButton = digitalRead(button2);


  if(leftButton == 1 & rightButton == 1){

    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);

    digitalWrite(ledBranco, HIGH);
    delay(1000);
    digitalWrite(ledBranco, LOW);
  }

  else if(leftButton == 0 & rightButton == 0){
    digitalWrite(ledVerde, HIGH);
  }

  else if(leftButton == 0 & rightButton == 1){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);
    delay(1000);
    digitalWrite(ledAmarelo, LOW);
  }

  else if(leftButton == 1 & rightButton == 0){
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
  }

  
}



