#include<Servo.h> //kütüphaneye ekledik
Servo servo; // servo objesi oluşturduk.

int servoPin = 9;
int potPin = A0;
int potValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  servo.attach(servoPin); //servo pinimizi attach keyword ile atadır
}

void loop() {
  potValue = analogRead(potPin);
  Serial.println("Pot Degeri: " + String(potValue));
  delay(100);
  int mapValue = map(potValue,0,1023,0,180);
  int constrainValue = constrain(mapValue, 0, 180);
  Serial.println("constrain degeri: " + String(constrainValue)); // map degerimizi yazdirdik
  delay(100);
  servo.write(constrainValue); // servoya constrainValue miktarınında dönmesini sağladık.

}
//Servo Motorları robot teknolojisinde kullanılıyor
