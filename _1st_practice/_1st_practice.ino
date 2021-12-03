//timing interval definition (unused)
#define timing 1000
//led pin
const int led = 13;
//time delay (subject to increase or decrease)
int time = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  delay(time);
  time+=10;
}

