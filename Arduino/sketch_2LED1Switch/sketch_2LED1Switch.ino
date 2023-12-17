int button = 0;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP);
  pinMode(7,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button = digitalRead(8);
  if(button == LOW)
  {
    count = count + 1;
    Serial.println(count);
    delay(1000);
    if (count == 1)
    {
          digitalWrite(13,HIGH);
          digitalWrite(7,LOW);
      }
    if (count == 2)
    {
          digitalWrite(7,HIGH);
          digitalWrite(13,LOW);
      }
    if (count == 3)
    {
          digitalWrite(13,HIGH);
          digitalWrite(7,HIGH);
      }
    if (count == 4)
    {
      count = 0;
      digitalWrite(13,LOW);
      digitalWrite(7,LOW);
      
      }
    }
    
}
