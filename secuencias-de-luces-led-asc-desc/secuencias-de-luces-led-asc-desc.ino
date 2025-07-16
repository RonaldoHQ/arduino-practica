// Secuencia de leds de forma ascendente y descendente

int delayNumber = 50;
int numbersLeds = 12;
void setup() {
  // put your setup code here, to run once:
  for(byte i = 2; i <= numbersLeds; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte i = 2; i <= numbersLeds; i++) {
    digitalWrite(i, HIGH);
    delay(delayNumber);
    digitalWrite(i, LOW);
  }

  for (byte i = numbersLeds; i >= 2; i--) {
    digitalWrite(i, HIGH);
    delay(delayNumber);
    digitalWrite(i, LOW);
  }

}