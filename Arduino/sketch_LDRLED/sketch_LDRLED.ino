
int  ldr = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldr = digitalRead(A1);
  Serial.println(ldr);
  if (ldr == 1)
  {
   digitalWrite(13,HIGH); 
    }
  else
   {
      digitalWrite(13,LOW);
    }
    
}
