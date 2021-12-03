
int ledPin= 10; // elegir Pin para el led
int botonPin= 5; // elegir pin para botón
int estadoBoton= 0; // botón apagado
void setup() {
pinMode(ledPin, OUTPUT); // declarar Led como salida
pinMode(botonPin, INPUT); // declarar botón como entrada
}
void loop(){
estadoBoton= digitalRead(botonPin); // leer valor de entrada
if(estadoBoton== HIGH) { // chequear si el valor leído es “1” (botón presionado)
digitalWrite(ledPin, LOW); // Led apagado
} else{//sino
digitalWrite(ledPin, LOW); // hacer que el Led parpadee
delay(200);
digitalWrite(ledPin, HIGH);
delay(200);
}
}
