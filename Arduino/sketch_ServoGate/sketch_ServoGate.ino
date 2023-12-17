# include <Servo.h>
Servo servom;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  servom.attach(9,500,2500);
  pinMode(5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (5 == HIGH)
  {
    servom.write(90);
    delay(5000);
    }
  else
  {
    servom.write(0);
    }
  delay(1000);
}
