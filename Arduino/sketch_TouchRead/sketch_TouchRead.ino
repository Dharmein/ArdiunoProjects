
int Touch = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Touch = digitalRead(A0);
  Serial.println(Touch);
}
