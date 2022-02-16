int transPin = 11;
int buttonPin = 2;

void setup() {
  pinMode(buttonPin,INPUT);
  pinMode(transPin,OUTPUT);

}

void loop() {
  if(digitalRead(buttonPin) == 1)
  {
    digitalWrite(transPin, HIGH);
  }
  else
  {
    digitalWrite(transPin, LOW);
  }

}
