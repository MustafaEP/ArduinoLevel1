int ledArray[] = {13, 12, 11, 10};


void setup() {
  for(int i=0; i<4; i++){
  pinMode(ledArray[i],OUTPUT);
  }

}

void loop() {
  for(int i=0; i<4; i++){
  digitalWrite(ledArray[i], HIGH);
  delay(500);
  digitalWrite(ledArray[i], LOW);
  
  }
  for(int j=2; j>0; j--){
    digitalWrite(ledArray[j], HIGH);
    delay(500);
    digitalWrite(ledArray[j], LOW);
    
  }

}
