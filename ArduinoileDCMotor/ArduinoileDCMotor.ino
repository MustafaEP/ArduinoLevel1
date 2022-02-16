int ln3 = 4;
int ln4 = 3;
int en2 = 5;


void setup() {
 pinMode(ln3, OUTPUT);
 pinMode(ln4, OUTPUT);
 pinMode(en2, OUTPUT);

}

void loop() {
  ileri();
  delay(5000);
  geri();
  delay(5000);

}

void ileri()
{
  digitalWrite(ln3, HIGH);
  digitalWrite(ln4, LOW);
  analogWrite(en2, 200);
}

void geri()
{
  digitalWrite(ln3, LOW);
  digitalWrite(ln4, HIGH);
  analogWrite(en2, 255);
}
