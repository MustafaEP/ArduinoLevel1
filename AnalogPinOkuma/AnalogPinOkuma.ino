int potPin = A0;
int potValue = 0;



void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  Serial.println("Basladi...");
  

}

void loop() {
  potValue = analogRead(potPin);
  Serial.print("Pot Degeri: ");
  Serial.println(potValue);
  delay(500);

}
