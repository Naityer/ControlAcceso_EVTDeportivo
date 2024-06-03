#include "ControlDeportivo.hpp"

ControlDeportivo::ControlDeportivo()
{
}

void ControlDeportivo::generarRangoUnico()
/*
    void --> void
    OBJ: Genera los rangos para las pilas (sin repeticion) y el rango de ID (unicos)
    PRE: -
*/
{
    // PILA A: Crear un vector con números del 1 al 100 (sin repeticion)
    for (int i = 1; i <= 100; ++i) {
        pilaA_aux.push_back(i);
    }
    // PILA B: Crear un vector con números del 0 al 59 (sin repticion)
    for (int i = 0; i <= 59; ++i) {
        pilaB_aux.push_back(i);
    }
    // ID unicos 
    for (int i = 1; i <= 100; ++i) {
        rangoID.push_back(i);
    }
}

int ControlDeportivo::numero_PilasA()
/*
    void --> int
    OBJ: Devuelve un valor aleatorio del array generado 
    PRE: El array para la Pila_A no puede estar vacio
*/
{
    indiceAleatorio = rand() % pilaA_aux.size();
    numeroSelecionado = pilaA_aux[indiceAleatorio];
    pilaA_aux.erase(pilaA_aux.begin() + indiceAleatorio);

    return numeroSelecionado;
}

int ControlDeportivo::numero_PilasB()
/*
    void --> int
    OBJ: Devuelve un valor aleatorio del array generado 
    PRE: El array para la Pila_B no puede estar vacio
*/
{
    indiceAleatorio = rand() % pilaB_aux.size();
    numeroSelecionado = pilaB_aux[indiceAleatorio];
    pilaB_aux.erase(pilaB_aux.begin() + indiceAleatorio);
    
    return numeroSelecionado;
}

ControlDeportivo::~ControlDeportivo()
{
}

