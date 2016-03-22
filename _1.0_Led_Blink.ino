
int pin1= 8;


//Solo se ejecuta una vez, inicialización del programa
void setup() {
  pinMode(pin1,  OUTPUT); // inicializa variable PIN como salida digital

}

void loop() {
  digitalWrite(pin1, HIGH);  // Prende el LED
  delay(300);              // Espera: 1 segundo= 1000 miliseugundos
  digitalWrite(pin1, LOW);    // Apaga el LED
  delay(1000);              // Espera
}


