#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Aficionado* aficionado)
{
    this->aficionado = aficionado;
    this->izq = nullptr;
    this->der = nullptr;
}

NodoArbol::~NodoArbol() {}
