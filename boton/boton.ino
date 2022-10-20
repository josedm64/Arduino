int boton = 3;
int LED = 2;

bool valor;

void setup() {
  // put your setup code here, to run once:

  pinMode(boton, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED, 1);
  valor = digitalRead(boton);

  if(valor == 0){
    digitalWrite(LED, 0);

  }else{
    digitalWrite(LED, 1);

  }  
  delay(50);
}