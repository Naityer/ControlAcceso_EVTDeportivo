#include "Aficionado.hpp"
#include <GestorDeportivo.hpp>

// Non-Constructor
Aficionado::Aficionado()
{
    this->horaLlegada = 0;
    this->identificador = 0;
    this->isSocio = 0;
}

// Overloading construtor
Aficionado::Aficionado(int identificador, bool isSocio, int horaLlegada)
{
    this->horaLlegada = horaLlegada;
    this->identificador = identificador;
    this->isSocio = isSocio;
}

void Aficionado::mostrar() { cout << "Identificador: " << identificador << "; Hora de llegada -> 18:" << (horaLlegada < 10 ? "0" : "") << horaLlegada << "; Es socio: " << (isSocio ? "Si" : "No") << endl; }

// Getters
int Aficionado::getIdentificador()
{
    return this->identificador;
}

int Aficionado::getHoraLlegada()
{
    return this->horaLlegada;
}

bool Aficionado::getIsSocio()
{
    return this->isSocio;
}

Aficionado::~Aficionado()
{
    
}

 