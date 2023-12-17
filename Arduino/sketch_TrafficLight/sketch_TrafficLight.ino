// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  delay(6000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(7,HIGH);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  delay(3000);
}
