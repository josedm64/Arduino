/*
Interruptor por porcentaje:
Si el potenciómetro está a más de la mitad de su recorrido y se pulsa le botón, se encenderá el LED.
Si el potenciómetro está a menos de la mitad de su recorrido y se pulsa el botón, se apagará el LED.
Si no se pulsa el botón, el potenciómetro no hace nada.
Si no se gira el potencómetro, el botón no cambia nada.
*/

int LED = 2;
int boton = 3;
int potenciometro = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(boton, INPUT);
  pinMode(potenciometro, INPUT);

  digitalWrite(LED, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int vpot = analogRead(potenciometro); //Voltaje del potenciómetro escala (0-1024)
  int vbot = digitalRead(boton);        //Voltaje del botón

  int vmap = map(vpot, 0, 1023, 0, 100);//Voltaje del potenciómetro (escala 0-100)

  if( (vmap > 50) && (vbot == 1)){
    digitalWrite(LED, 1);
  }

  if( (vmap < 50) && (vbot == 1)){
    digitalWrite(LED, 0);
  }
}