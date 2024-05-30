#include "GestorDeportivo.hpp"

GestorDeportivo::GestorDeportivo()
{
    pila_A = new Pila();
    pila_B = new Pila();
    
    controlDeportivo = new ControlDeportivo();
    controlDeportivo->generarRangoUnico();
}

void GestorDeportivo::rellenarPilas() 
{
    borraPedidosPila();
    for(auto i = 1; i <= 20; i++) {
        int valor_A = controlDeportivo->numero_PilasA();
        pila_A->insertar(valor_A);
        int valor_B = controlDeportivo->numero_PilasB();
        pila_B->insertar(valor_B);
    }
    
}

// ZONA PILAS

void GestorDeportivo::mostrarPilas()
{
    pila_A->mostrar();
    pila_B->mostrar();
    cout << "CANTIDAD PILA (A)  = " << pila_A->getLongitud() << endl;
    cout << "CANTIDAD PILA (B) = " << pila_B->getLongitud() << endl;
}

void GestorDeportivo::borraPedidosPila() 
{
    pila_A->~Pila();
    pila_B->~Pila();
    pila_A->setLongitud(0);
    pila_B->setLongitud(0);
}

GestorDeportivo::~GestorDeportivo()
{
}

