void setup() {
// pin connections for the LED lights
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
}
void loop() {
// turning on voltage at output 8(for red LED)
digitalWrite(8,HIGH);
delay(3000); // red LED is on
// turning on voltage at output 8(for red LED)
digitalWrite(10,HIGH);
delay(1000); // yellow LED is on
//for turning off red and yellow and turning on green
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(12,HIGH);
delay(3000);
digitalWrite(12,LOW); //green is off for blinking next
//to make green on and off for 3 times
delay(500);
digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
delay(500);
digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
delay(500);
digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
//to turn yellow on once
digitalWrite(10,HIGH);
delay(1000);
digitalWrite(10,LOW);
}
