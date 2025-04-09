int ledPin = 13; // LED a 13-as lábra kötve

void setup() {
  pinMode(ledPin, OUTPUT); // LED pin kimenetként beállítva
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED bekapcsol
  delay(1000);                // vár 1 másodpercet
  digitalWrite(ledPin, LOW);  // LED kikapcsol
  delay(1000);                // vár 1 másodpercet
}
