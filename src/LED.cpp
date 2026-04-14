#include "LED.h"

Led::Led(uint8_t pinoLed) : desligarNoMomento(0),
                            desligadoPorTempo(false),
                            tempoAnteriorPiscar(0),
                            tempoEspera(0),
                            estadoPiscar(false),
                            repeticoes(0)
{
    this->pinoLed = pinoLed;
    estadoLed = LOW;
}

void Led::ligarled()
{
    estadoPiscar = false;
    desligadoPorTempo = false;
    estadoLed = HIGH;
}

void Led::ligarled(uint32_t tempoligado_ms)
{
    estadoLed = HIGH;
    desligadoPorTempo = true;
    desligarNoMomento = millis() + tempoligado_ms;
}

void Led::desligarLed()
{
    estadoPiscar = false;
    desligadoPorTempo = false;
    estadoLed = LOW;
}

void Led::alternar()
{
    estadoLed = !estadoLed;
}

bool Led::getEstado()
{
    return estadoLed;
}

void Led::setEstado(bool estadoLed)
{
    this->estadoLed = estadoLed;
}

void Led::piscar()
{
    estadoPiscar = true;
    tempoEspera = 500;
    tempoAnteriorPiscar = millis();
    estadoLed = HIGH;
}

void Led::piscar(float frequencia)
{
}

void Led::piscar(float frequencia, uint16_t repeticoes)
{
    estadoPiscar = true;
    tempoEspera = (1000.0f / 2.0f * frequencia);
    tempoAnteriorPiscar = millis();
    estadoLed = HIGH;
    this->repeticoes = repeticoes * 2;
}

void Led::funcaoPiscar()
{
    if (millis() - tempoAnteriorPiscar >= tempoEspera)
    {
        estadoLed = !estadoLed;
        tempoAnteriorPiscar = millis();
    }
    if (repeticoes > 0)
    {
        repeticoes--;
        if (repeticoes == 0)
        {
            estadoPiscar = false;
            estadoLed = LOW;
        }
    }
}

uint8_t Led::getPinoLed()
{
    return pinoLed;
}

void Led::update()
{
    if (desligadoPorTempo)
    {
        if (millis() - desligarNoMomento)
        {
            estadoLed = LOW;
            desligadoPorTempo = false;
        }
    }

    if (estadoPiscar)
    {
        if (desligadoPorTempo)
            funcaoDesligamento();
        if (estadoPiscar)
            funcaoPiscar();
        digitalWrite(pinoLed, estadoLed);
    }

    digitalWrite(pinoLed, estadoLed);
}
