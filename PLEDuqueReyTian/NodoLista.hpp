#include <iostream>
#include "Aficionado.hpp"

#ifndef NODOLISTAS_HPP
#define NODOLISTAS_HPP

using namespace std;

class NodoLista
{   
 
public:
    NodoLista(Aficionado* af, NodoLista *sig = NULL, NodoLista* ant = NULL);
    ~NodoLista();
    
private:

    Aficionado* aficionado;
    NodoLista *siguiente;
    NodoLista *anterior;
    friend class Lista;
    
};

typedef NodoLista* pnodoLista;

#endif // NODOLISTAS_HPP
