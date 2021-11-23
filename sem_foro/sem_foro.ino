/*const int pin1 = 6;
const int pin2 = 7;
const int pin3 = 8;*/

//declare array of LED pins, loop count var and time interva
int ledArray[] = { 6, 7, 8, 9, 10, 11 };
int counts = 0;
int time = 50;

void setup() {
  //set every element in array as an OUTPUT
  for (counts = 0; counts < 6; ++counts) {
    pinMode(ledArray[counts], OUTPUT);
  }
}

void loop() {
 
  for (counts = 0; counts < 6; ++counts) {
    //loop through each item in the array and turn them ON
    digitalWrite(ledArray[counts], HIGH);
    //then wait,
    delay(time);
    ///then turn them OFF
    digitalWrite(ledArray[counts], LOW);
    //then wait
    delay(time);
    //and print that we`ve completed a cycle
    Serial.print("cycle complete");
    Serial.print(ledArray[counts]);
  }
}
/*void setup() {
  // set LED inputs and turn them off
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
}

void loop() {
  digitalWrite(pin1, HIGH);
  delay(200);
  digitalWrite(pin1, LOW);

  digitalWrite(pin2, HIGH);
  delay(200);
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, HIGH);
  delay(200);
  digitalWrite(pin3, LOW);

}*/
