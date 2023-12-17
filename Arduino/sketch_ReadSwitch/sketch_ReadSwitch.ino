int button = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button = digitalRead(8);
  Serial.println(button);
  if(button == LOW)
  {
    digitalWrite(13,HIGH);
    }
  else
  {
    digitalWrite(13,LOW);
    }
}
