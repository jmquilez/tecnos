int ldrPin = 4; 
int ledPin = 2; 
int lightVal = 0; 
 
void setup() { 
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
} 
 
void loop() { 
 
  lightVal = analogRead(ldrPin);   
  digitalWrite(ledPin, HIGH); 
  delay(lightVal);                  
  digitalWrite(ledPin, LOW);   
  delay(lightVal);  
 
  Serial.println(lightVal);
 
    if(lightVal<=250){
  Serial.println("Hágase la luz");
}else if(lightVal>600){
    Serial.println("Te pasaste de lanza");
  }else{
    Serial.println("No problem");
  }
 
}

