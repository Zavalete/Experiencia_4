void setup()
{
  /*se designan los pines a utilizar, todos son de salida*/
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13,OUTPUT);
}

void CambiaLed(){
  /*se llama para verificar al pin 13*/
  digitalWrite(13,!digitalRead(13));
  /*el signo de esclamación significa que se desea hacer la función contraria */
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(1000);// Espera 1 segundo (1000 milisegundos)
  /*Se establece una orientacion inicial y un delay que permite el movimiento del motor*/
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);// Espera 1 segundo (1000 milisegundos)
  /*Cambio de señal genera el cambio de dirección y el delay es el tiempo de rotación*/
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(1000);// Espera 1 segundo (1000 milisegundos)
  /*Cambio de señal genera el cambio de dirección y el delay es el tiempo de rotación*/
  CambiaLed();
  /*Se llama a la función que enciende el led del pin 13,comprobar el buen funcionamientp del circuito*/
}
