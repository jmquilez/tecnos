int sensorPin = 2; //2 = analog sensor pin
void setup()
{
Serial.begin(9600); //Start the serial conn to see temp output
}
void loop() //loop forever
{
  
//read from sensor
int lectura = analogRead(sensorPin);

//convert to voltage (*5 Volts / 1024)
float voltaje = lectura * 5.0/1024.0;

//print the voltage followed by a " voltios" string tag
Serial.print(voltaje); Serial.println(" voltios");

//turn voltage into Celsius
float temperaturaC = (voltaje - 0.5) * 100 ; //converting from 10 mv per degree wit 500 mV offset
//to degrees ((voltage - 500mV) times 100)

//print Celsius result with string tag " grados C"
Serial.print(temperaturaC); Serial.println(" grados C");

//now convert to Fahrenheit
float temperatureF = (temperaturaC * 9.0 / 5.0) + 32.0;

//print Farenheit temp with string tag " degrees F"
Serial.print(temperatureF); Serial.println(" degrees F");

//wait for half a sec to repeat the loop
delay(500);
}
