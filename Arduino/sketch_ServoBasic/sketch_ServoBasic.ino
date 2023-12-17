
# include <Servo.h>
Servo servo_motor;
void setup() {
  // put your setup code here, to run once:
  servo_motor.attach(9,500,2500);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo_motor.write(180);
  delay(1000);
  servo_motor.write(0);
  delay(1000);
  servo_motor.write(45);
  delay(1000);
}
