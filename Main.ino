#include <Servo.h>

int servoPin = 5;
int potenciadorPin = 0;

int valorActual = 0;

Servo servo;

void setup()
{
    Serial.begin(115200);
    servo.attach(servoPin);
    Serial.print("ALO");
}

void loop()
{
    valorActual = analogRead(potenciadorPin);
    valorActual = map(valorActual, 0, 1023, 0, 180);
    servo.write(valorActual);
    Serial.println(valorActual);
    delay(50);
}
