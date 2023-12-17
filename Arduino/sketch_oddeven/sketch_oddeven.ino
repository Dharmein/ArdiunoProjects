int input = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  for (input = 0; input <=10; input++)
  {
    if (input%2 == 0)
    {
    Serial.println("The number is "+ String(input) +" even");
    delay(500);
    }
    else
    {
    Serial.println("The number is "+ String(input) +" odd");
    delay(500);
    }
  }
 }
