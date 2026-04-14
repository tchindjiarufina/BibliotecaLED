/**
 * @brief Exemplo 4: Piscar o LED com frequência personalizada.
 * 
 * Neste exemplo, o LED pisca continuamente com uma frequência
 * definida no código (2 Hz).
 * 
 * Frequências maiores resultam em piscadas mais rápidas.
 */
#include "Led.h"

Led led1(13);

void setup() {
  led1.piscar(2.0); 
}

void loop() {
  led1.update();
}