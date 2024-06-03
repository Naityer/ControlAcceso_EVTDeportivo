#include "NodoLista.hpp"

NodoLista::NodoLista(Aficionado* af, NodoLista* sig, NodoLista* ant)
{
    this->aficionado = af;
    siguiente = sig;
    anterior = ant;
}

NodoLista::~NodoLista()
{
}

