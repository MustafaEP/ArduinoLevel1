int ldrPin = A0;
int ldrValue = 0;
int ledPin = 13;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  Serial.println("Basladi...");
  delay(500);
  
}

void loop() {
  ldrValue = (analogRead(ldrPin));
  Serial.println(ldrValue);
  if(ldrValue>500)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
  delay(500);
}
