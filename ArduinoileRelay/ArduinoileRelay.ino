int buttonPin = 2;
int relayPin = 12;
boolean state = false;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin,LOW);
  
}

void loop() {
  if(digitalRead(buttonPin) == 1)
  {
    if(state == false)
    {
      digitalWrite(relayPin,HIGH);
      state = true;
    }
    else
    {
      digitalWrite(relayPin,LOW);
      state = false;
    }
  }

}
