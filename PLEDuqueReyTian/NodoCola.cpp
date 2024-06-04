#include "NodoCola.hpp"

NodoCola::NodoCola(Aficionado* af, NodoCola* sig)
{
    this->aficionado = af;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}



