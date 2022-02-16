int buttonPin = 2;
boolean buttonState = false;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.println("Basladi...");
  delay(10);

}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  delay(100);

}
