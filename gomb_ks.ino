// Pinok beállítása
const int buttonPin = 2;     // button pin

// Változók
int buttonState = 0;         //  button status
int lastButtonState = 0;     // Az előző gomb állapota

void setup() {
  // Gomb pin beállítása bemeneti módra !!!
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
      Serial.println("A gomb le lett nyomva!");
    } else {
      Serial.println("A gomb nem lett le nyomva!");
    }
    // Frissítjük az előző állapotot
    lastButtonState = buttonState;
  }
}
