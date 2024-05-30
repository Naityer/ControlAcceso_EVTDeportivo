#include "Aficionado.hpp"
#include <GestorDeportivo.hpp>

Aficionado::Aficionado()
{
    this->horaLlegada = rand() % 60;
    this->identificador = 0;
    this->isSocio = 0;
}

Aficionado::~Aficionado()
{
}

 