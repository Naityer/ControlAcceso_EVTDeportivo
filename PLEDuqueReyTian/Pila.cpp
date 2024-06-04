#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila:: insertar(int v)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}

int Pila::extraer()
{
    pnodoPila nodo;
    int v;
    if(!ultimo)
        return 0;
        
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

int Pila:: cima()
{
    //pnodoPila nodo;
    if (!ultimo)
        return 0;
    return ultimo->valor;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "El contenido de la PILA es: " << endl;

    while(aux){
        cout << "-> " << aux->valor;
        aux = aux ->siguiente;
    }
    cout << "\n"<< endl;
}

int Pila::getLongitud()
{
    return this->longitud;
}

void Pila::setLongitud(int v) {
    this->longitud = v;
}

Pila::~Pila()
{
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}

