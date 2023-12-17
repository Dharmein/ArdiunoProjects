# include <Servo.h>
Servo servom;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  servom.attach(9,500,2500);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i = 0; i<=180; i++ )
  {
    servom.write(i);
    delay(100);
    }
   for (i = 180; i>=0; i-- )
  {
    servom.write(i);
    delay(100);
    }
   delay(1000);
}
