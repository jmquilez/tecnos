//declare led pin
int ledPin = 10;

//hardware setup
void setup()
{
// sets the digital pin as output
pinMode(ledPin, OUTPUT);
}

//infinite loop (run forever)
void loop()
{
  
}
//repeat this 5 times
for (int x=0; x<5; x++) {
digitalWrite(ledPin, HIGH); //set the LED on
delay(300); //wait for 300ms
digitalWrite(ledPin, LOW); //set the LED off
delay(50); //wait for 50ms
}
//delay the program 100ms
delay(100);

//repeat 5 times
for (int x=0; x<5; x++) {
digitalWrite(ledPin, HIGH); //set the LED on
delay(300); //wait for 300ms
digitalWrite(ledPin, LOW); // set the LED off
delay(50); //wait for 50ms
}
//delay the program 100ms
delay(100);
//repeat this 5 times
for (int x=0; x<5; x++) {
digitalWrite(ledPin, HIGH); //set the LED on
delay(300); //wait for 300ms
digitalWrite(ledPin, LOW); //set the LED off
delay(50); //wait for 50ms
}
//delay 5000 millis to repeat loop
delay(5000);
