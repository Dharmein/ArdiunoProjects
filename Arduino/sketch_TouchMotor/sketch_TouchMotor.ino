
int Touch = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Touch = digitalRead(A0);
  Serial.println(Touch);
  if(Touch == 1)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
   
    }
   else
   {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    }
}
