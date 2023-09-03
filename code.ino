const int RELAY_PIN_1 = 2; //Right Up when low and Down when high
const int RELAY_PIN_2 = 3; //Center Up when low and Down when high
const int RELAY_PIN_3 = 4; //Center Left when low and Down when high
const int RELAY_PIN_4 = 5; //Center Right when low and Down when high
const int RELAY_PIN_5 = 6; //Left Up when low and Down when high
const int RELAY_PIN_6 = 7; //Left Down when low and Down when high
const int RELAY_PIN_7 = 8; //Timer On

void setup()
{
  Serial.begin(9600);

  pinMode(RELAY_PIN_1, OUTPUT);
  pinMode(RELAY_PIN_2, OUTPUT);
  pinMode(RELAY_PIN_3, OUTPUT);
  pinMode(RELAY_PIN_4, OUTPUT);
  pinMode(RELAY_PIN_5, OUTPUT);
  pinMode(RELAY_PIN_6, OUTPUT);
  pinMode(RELAY_PIN_7, OUTPUT);

  digitalWrite(RELAY_PIN_7 , HIGH);
  Serial.println("Timer OFF Hogaya");

  digitalWrite(RELAY_PIN_6 , HIGH);
  Serial.println("Left Down Halt Hogaya Ha");
  delay(5000);

  digitalWrite(RELAY_PIN_5 , LOW);
  Serial.println("Left Up Ho Rha Ha");
  delay(5000);
  Serial.println("Left Up Hogaya");
  digitalWrite(RELAY_PIN_5 , HIGH);

  digitalWrite(RELAY_PIN_2 , LOW);
  Serial.println("Center Up Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_4 , HIGH);
  Serial.println("Center Right Halt Hogaya");
  delay(500);

  digitalWrite(RELAY_PIN_3 , LOW);
  Serial.println("Center Left Ho Rha Ha");
  delay(8000);
  Serial.println("Center Left Hogaya");
  digitalWrite(RELAY_PIN_3 , HIGH);
  Serial.println("Center Left Halt Hogaya");

}

/*
  Initial Condition
  1) Left Up (Relay 5 High)
  2) Center Up (Relay 2 High)
  3) Center Left (Relay 3 High)
  4) Right Up (Relay 1 High)

  In Loop
  5) Left Down (Relay 6 High)
  6) Left Up (Relay 5 High)
  7) Center Down (Relay 2 Low)
  8) Center Right (Relay 4 High)
  9) Right Down (Relay 1 Low)

  10) Center Up (Relay 2 High)
  11) Center Left (Relay 3 High)
  12) Right Up (Relay 1 High)

  13) Center Down (Relay 2 Low)
  14) Center Right (Relay 4 High)
  15) Right Down (Relay 1 Low)

  16) Center Up (Relay 2 High)
  17) Center Left (Relay 3 High)
  18) Right Up (Relay 1 High)

  Repeat 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18
  Then 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18
  And so on
*/

void loop()
{
  //  digitalWrite(RELAY_PIN_3 , LOW); //Center Left Ho Rha Ha
  //  Serial.println("3high");
  //  delay(1000);
  //  digitalWrite(RELAY_PIN_3 , HIGH); //Center Left Nhe Rha Ha
  //  Serial.println("3low");
  //  delay(1000);

  digitalWrite(RELAY_PIN_6 , LOW);
  Serial.println("Left Down Ho Rha Ha");

  delay(2000);
  Serial.println("Left Down Hogaya");
  digitalWrite(RELAY_PIN_6 , HIGH);
  Serial.println("Left Down Halt Hogaya");
  delay(100);

  digitalWrite(RELAY_PIN_7 , LOW);
  Serial.println("Timer ON Hogaya");
  delay(100);

  digitalWrite(RELAY_PIN_2 , HIGH);
  Serial.println("Center Down Hogaya");

  delay(20000);

  digitalWrite(RELAY_PIN_7 , HIGH);
  Serial.println("Timer OFF Hogaya");

  //  digitalWrite(RELAY_PIN_5 , HIGH);
  //  Serial.println("Left Up Ho Rha Ha");
  //  delay(2000);
  //  Serial.println("Left Up Hogaya");
  //  digitalWrite(RELAY_PIN_5 , LOW);
  Serial.println("Left Up Halt Hogaya");

  digitalWrite(RELAY_PIN_1 , LOW);
  Serial.println("Right Up Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_4 , LOW);
  Serial.println("Center Right Ho Rha Ha");
  delay(5000);
  Serial.println("Center Right Hogaya");
  digitalWrite(RELAY_PIN_4 , HIGH);
  Serial.println("Center Right Halt Hogaya");

  digitalWrite(RELAY_PIN_1 , HIGH);
  Serial.println("Right Down Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_2 , LOW);
  Serial.println("Center Up Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_3 , LOW);
  Serial.println("Center Left Ho Rha Ha");
  delay(10000);
  Serial.println("Center Left Hogaya");
  digitalWrite(RELAY_PIN_3 , HIGH);
  Serial.println("Center Left Halt Hogaya");

  digitalWrite(RELAY_PIN_2 , HIGH);
  Serial.println("Center Down Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_1 , LOW);
  Serial.println("Right Up Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_4 , LOW);
  Serial.println("Center Right Ho Rha Ha");
  delay(7000);
  Serial.println("Center Right Hogaya");
  digitalWrite(RELAY_PIN_4 , HIGH);
  Serial.println("Center Right Halt Hogaya");

  digitalWrite(RELAY_PIN_1 , HIGH);
  Serial.println("Right Down Hogaya");
  delay(500);

  digitalWrite(RELAY_PIN_2 , LOW);
  Serial.println("Center Up Hogaya");
  delay(1000);

  digitalWrite(RELAY_PIN_3 , LOW);
  Serial.println("Center Left Ho Rha Ha");
  delay(10000);
  Serial.println("Center Left Hogaya");
  digitalWrite(RELAY_PIN_3 , HIGH);
  Serial.println("Center Left Halt Hogaya");

}
