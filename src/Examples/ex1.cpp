/** * @brief Exemplo 1: Liga o LED continuamente. * * Neste exemplo, o LED é ligado no método setup() e mantem * ligado durante toda a execução do programa. * * O método update() é chamado no loop() para manter o funcionamento correto. */


#include "Led.h"

Led led1(13);

void setup() {
  led1.ligarled();
}

void loop() {
  led1.update();
}