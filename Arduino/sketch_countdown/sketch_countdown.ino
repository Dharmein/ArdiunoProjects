
int countdown = 16;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  countdown = countdown - 1;
  Serial.println(countdown);
  delay(1000);
  if (countdown == 0)
  {
    digitalWrite(13,HIGH);
    countdown = 16;
    }
  else
  {
    digitalWrite(13,LOW);
    }
}
