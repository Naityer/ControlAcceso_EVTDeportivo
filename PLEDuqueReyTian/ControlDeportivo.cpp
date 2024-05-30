#include "ControlDeportivo.hpp"

ControlDeportivo::ControlDeportivo()
{
}

void ControlDeportivo::generarRangoUnico()
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
{
    indiceAleatorio = rand() % pilaA_aux.size();
    numeroSelecionado = pilaA_aux[indiceAleatorio];
    pilaA_aux.erase(pilaA_aux.begin() + indiceAleatorio);

    return numeroSelecionado;
}

int ControlDeportivo::numero_PilasB()
{
    indiceAleatorio = rand() % pilaB_aux.size();
    numeroSelecionado = pilaB_aux[indiceAleatorio];
    pilaB_aux.erase(pilaB_aux.begin() + indiceAleatorio);
    
    return numeroSelecionado;
}

int ControlDeportivo::asignarID() 
{
    indiceAleatorio = rand() % rangoID.size();
    numeroSelecionado = rangoID[indiceAleatorio];
    rangoID.erase(rangoID.begin() + indiceAleatorio);
    
    return numeroSelecionado;
}

ControlDeportivo::~ControlDeportivo()
{
}

