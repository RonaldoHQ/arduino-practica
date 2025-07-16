// Secuencia de leds de forma ascendente y descendente
int timerDelay = 1000;
int numberPin = 12;
byte mitad = (numberPin / 2) + 1; // 7
void setup() {
  // put your setup code here, to run once:
  for(byte i = 2; i <= numberPin; i++) {
    pinMode(i, OUTPUT);
  }
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(mitad, HIGH);
  delay(timerDelay);
  digitalWrite(mitad, LOW);

  for (byte i = 1; i < mitad; i++) {
    if(i == 6) {
      break;
    }
    int decrement = mitad - i;
    int incremet = mitad + i;
    digitalWrite(decrement, HIGH);
    digitalWrite(incremet, HIGH);
    delay(timerDelay);
    digitalWrite(decrement, LOW);
    digitalWrite(incremet, LOW);
  }

  int increment = 3;
  for (int pin = numberPin - 1; pin > 1; pin--) {
    if(pin == 7) {
      break;
    }

    digitalWrite(increment, HIGH);
    digitalWrite(pin, HIGH);
    delay(timerDelay);
    digitalWrite(pin, LOW);
    digitalWrite(increment, LOW);
    increment++;
  }

}