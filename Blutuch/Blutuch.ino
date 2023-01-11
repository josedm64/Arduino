//Incluir librería del módulo Bluetooth
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX, TX

char nombre[21] = "HC-05";
char pin[5] = "1234";
char BPS = '4';

void setup() {
    BTSerial.begin(9600);

    pinMode(13, OUTPUT);
    digitalWrite(13, 1);
    delay(4000);

    digitalWrite(13, 0);

    BTSerial.print("AT");
    delay(1000);

    BTSerial.print("AT+NAME");
    BTSerial.print(nombre);
    delay(1000);

    BTSerial.print("AT+BAUD");
    BTSerial.print(BPS);
    delay(1000);

    BTSerial.print("AT+PIN");
    BTSerial.print(pin);
    delay(1000);

}

void loop() {
    digitalWrite(13, !digitalRead(13));
    delay(300);
}
