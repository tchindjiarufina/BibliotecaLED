/**
 * @brief Exemplo 3: Faz o LED piscar continuamente.
 * 
 * Neste exemplo, o LED pisca utilizando a frequência
 * padrão de 1 Hz, de forma contínua.
 * 
 * O comportamento de piscada é gerenciado internamente
 * pela biblioteca.
 */
#include "Led.h"

Led led1(13);

void setup() {
  led1.piscar(); // frequência padrão
}

void loop() {
  led1.update();
}