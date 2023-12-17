
int Touch = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Touch = digitalRead(A0);
  Serial.println(Touch);
  if(Touch == 1)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
   
    }
   else
   {
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    }
}
