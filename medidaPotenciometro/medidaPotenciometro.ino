const int analogPin = A0;
int value;      //variable que almacena la lectura analógica raw
int position;   //posicion del potenciometro en tanto por ciento

int LED = 2;
int boton = 3;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

  digitalWrite(LED, 0);
}

void loop() {
   value = analogRead(analogPin);          // realizar la lectura analógica raw
   position = map(value, 0, 1023, 0, 100);  // convertir a porcentaje

   Serial.println(position);
   

   if(position < 50){
     digitalWrite(LED, 0);
   }else{
     digitalWrite(LED, 1);
   }


   delay(50);
}