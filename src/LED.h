#ifndef LED_h
#define LED_h
#include <Arduino.h>

// MÉTODOS - AÇÕES DO OBJETO
// PROPRIEDADES - CARACTERÍSTICAS DO OBJETO

class Led
{
private:
    // ENCAPSULAMENTO
    uint8_t pinoLed;
    bool estadoLed;
    bool desligadoPorTempo = false;
    uint32_t desligarNoMomento;
    void  funcaoPiscar();
    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;



public:
    // CONSTRUTOR
    Led(uint8_t pin); // Metodo construdor, Devera ter o mesmo nome

    void ligarled();
    void ligarled(uint32_t tempoligado_ms); // metodo sobrecarga

    void desligarLed(); // ok

    void piscar();
    void piscar(float frequencia);
    void piscar(float frequencia, uint16_t repeticoes);

    // GETTERS E SETTERS
    bool getEstado();
    void setEstado(bool estadoLed);

    uint8_t getPinoLed();

    void alternar();
    void update();
};

#endif
