void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
	digitalWrite(13,HIGH);
  	digitalWrite(12,LOW);
	digitalWrite(7,HIGH);
  	digitalWrite(6,LOW);
  	delay(5000);
  	digitalWrite(12,HIGH);
  	digitalWrite(13,LOW);
	digitalWrite(6,HIGH);
  	digitalWrite(7,LOW);
  	delay(5000);
}