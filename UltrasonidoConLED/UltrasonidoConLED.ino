//incluir libreria para el arduino y el HC-SR04
#include <NewPing.h>

//definir pines para el HC-SR04 y el buzzer
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define LED          2

#define MAX_DISTANCE 200

void setup() {
    Serial.begin(9600);
}

void loop() {
    //definir el sensor
    NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
    
    //definir la distancia
    delay(50);
    int distancia = sonar.ping_cm();
    
    //imprimir la distancia
    Serial.println(distancia);


    //cuanto menor sea la distancia, mas rapido se encendera el buzzer
    if (distancia < 10) {
        digitalWrite(LED, 1);
        delay(10);
        digitalWrite(LED, 0);
    }
    else if (distancia < 20) {
        digitalWrite(LED, 1);
        delay(50);
        digitalWrite(LED, 0);
    }
    else if (distancia < 30) {
        digitalWrite(LED, 1);
        delay(100);
        digitalWrite(LED, 0);
    }
    else if (distancia < 40) {
        digitalWrite(LED, 1);
        delay(150);
        digitalWrite(LED, 0);
    }
    else if (distancia < 50) {
        digitalWrite(LED, 1);
        delay(200);
        digitalWrite(LED, 0);
    }
    else if (distancia < 60) {
        digitalWrite(LED, 1);
        delay(250);
        digitalWrite(LED, 0);
    }
    else if (distancia < 70) {
        digitalWrite(LED, 1);
        delay(300);
        digitalWrite(LED, 0);
    }
    else if (distancia < 80) {
        digitalWrite(LED, 1);
        delay(350);
        digitalWrite(LED, 0);
    }
    else if (distancia < 90) {
        digitalWrite(LED, 1);
        delay(400);
        digitalWrite(LED, 0);
    }
    else if (distancia < 100) {
        digitalWrite(LED, 1);
        delay(450);
        digitalWrite(LED, 0);
    }
    else if (distancia < 110) {
        digitalWrite(LED, 1);
        delay(500);
        digitalWrite(LED, 0);
    }
    else if (distancia < 120) {
        digitalWrite(LED, 1);
        delay(550);
        digitalWrite(LED, 0);
    }
    else if (distancia < 130) {
        digitalWrite(LED, 1);
        delay(600);
        digitalWrite(LED, 0);
    }
    else if (distancia < 140) {
        digitalWrite(LED, 1);
        delay(650);
        digitalWrite(LED, 0);
    }
    else if (distancia < 150) {
        digitalWrite(LED, 1);
        delay(700);
        digitalWrite(LED, 0);
    }
    else if (distancia < 160) {
        digitalWrite(LED, 1);
        delay(750);
        digitalWrite(LED, 0);
    }
    else if (distancia < 170) {
        digitalWrite(LED, 1);
        delay(800);
        digitalWrite(LED, 0);
    }
    else if (distancia < 180) {
        digitalWrite(LED, 1);
        delay(850);
        digitalWrite(LED, 0);
    }
    else{
        digitalWrite(LED, 1);
        delay(900);
        digitalWrite(LED, 0);
    }
}
