
int x = 0;
int product;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  x=x+1;
  product=7*x;
  Serial.println(product);
  delay(1000);
  
}
