/**
 * @brief Exemplo 2: Liga o LED por um tempo determinado.
 * 
 * Neste exemplo, o LED é ligado por um tempo de 3 segundos
 * e, após esse tempo, é desligado automaticamente.
 * 
 * O controle de tempo é realizado de forma não bloqueante.
 */
#include "Led.h"

Led led1(13);

void setup() {
  led1.ligarled(3000);
}

void loop() {
  led1.update();
}