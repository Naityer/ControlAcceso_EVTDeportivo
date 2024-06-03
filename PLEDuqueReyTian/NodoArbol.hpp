#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP

#include <iostream>
#include "Aficionado.hpp"
#include <vector>

class NodoArbol
{
public:
    NodoArbol(Aficionado* a);
    ~NodoArbol();

private:
    Aficionado* aficionado; 
    NodoArbol* izq;
    NodoArbol* der;

    friend class Arbol;
};

typedef NodoArbol* pnodoAbb;
#endif // NODOARBOL_HPP
