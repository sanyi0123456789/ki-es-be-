// Pinok beállítása
const int buttonPin = 2;     // A gomb pinje

// Változók
int buttonState = 0;         // A gomb állapota
int lastButtonState = 0;     // Az előző gomb állapota

void setup() {
  // Gomb pin beállítása bemeneti módra
  pinMode(buttonPin, INPUT);
  
  // Soros kommunikáció inicializálása
  Serial.begin(10000);
}

void loop() {
  // A gomb állapotának olvasása
  buttonState = digitalRead(buttonPin);
  
  // Ha a gomb állapota változik (lefelé vagy felfelé)
  if (buttonState != lastButtonState) {
    // Ha a gomb meg lett nyomva (állapot változott LOW-ra)
    if (buttonState == HIGH) {
      Serial.println("A gomb meg lett nyomva!");
    } else {
      Serial.println("A gomb el van engedve!");
    }
    // Frissítjük az előző állapotot
    lastButtonState = buttonState;
  }
}
