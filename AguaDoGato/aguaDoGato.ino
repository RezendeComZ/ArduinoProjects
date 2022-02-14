int motionPin = 4; // Pin do sensor de movimento
int relayPin = 8; // Pin do relé

void setup() {
    Serial.begin(9600);
    pinMode(relayPin, OUTPUT); // Seta o pin do relay como OUTPUT
    digitalWrite(relayPin, LOW); // Pra comecar com o relé desligado
    Serial.println("Vai começar!");
    delay(5000);                         
}
 
void loop() {
  while (digitalRead(motionPin) == HIGH) {
    digitalWrite(relayPin, HIGH); //Ligar o rele
    Serial.println("Rele ligado!");
    delay(60000);
  }
  digitalWrite(relayPin, LOW); //desligar o rele
  Serial.println("Rele desligado");
}