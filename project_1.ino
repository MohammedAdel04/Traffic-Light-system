int greenled = 2;
int yellowled = 13;
int redled = 8;
int on = 1000;
int off = 1000;
void setup()
{
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);
}

void loop()
{
  digitalWrite(redled, HIGH);
  delay(on);
  digitalWrite(yellowled, HIGH);
  delay(on);
  digitalWrite(yellowled, LOW);
  delay(off);
  digitalWrite(yellowled, HIGH);
  delay(on);
  digitalWrite(yellowled, LOW);
  delay(off);
  digitalWrite(yellowled, HIGH);
  delay(on);
  digitalWrite(yellowled, LOW);
  digitalWrite(redled, LOW);
  digitalWrite(greenled, HIGH);
  delay(on);
  digitalWrite(greenled, LOW);
  delay(off);
}
