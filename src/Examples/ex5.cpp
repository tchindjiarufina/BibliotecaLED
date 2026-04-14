/**
 * @brief Exemplo 5: Piscar o LED uma quantidade definida de vezes.
 * 
 * Neste exemplo, o LED pisca 5 vezes com frequência de 1 Hz
 * e, após completar as repetições, permanece desligado.
 * 
 * Esse modo é útil para sinalizações específicas.
 */
#include "Led.h"

Led led1(13);

void setup() {
  led1.piscar(1.0, 5); // pisca 5 vezes
}

void loop() {
  led1.update();
}