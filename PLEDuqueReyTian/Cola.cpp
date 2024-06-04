#include "Cola.hpp"

Cola::Cola()
{
    primero = ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(Aficionado* af)
{
    pnodoCola nuevo;
    nuevo = new NodoCola(af);
    
    if(ultimo) {
        ultimo->siguiente = nuevo;
    }
    ultimo = nuevo;
    
    if(!primero) {
        primero = nuevo;
    }
    longitud++;
}

Aficionado* Cola::eliminar()
{
    pnodoCola nodo;
    Aficionado* af;
    nodo = primero;
    if(!nodo)
        primero = NULL;  
    primero = nodo->siguiente;
    af = nodo->aficionado;
    delete nodo;
    if(!primero)
        primero = NULL;
    longitud--;
    return af;
}

void Cola::mostrar()
{
    pnodoCola aux = primero;
    cout << "==========================================================================================================" << endl;
    while(aux) {
        aux->aficionado->mostrar();
        aux = aux->siguiente;
    }
}

Aficionado* Cola::verPrimero()
{
    return primero->aficionado;
}

int Cola::getLongitud()
{
    return longitud;
}

void Cola::setLongitud(int v) 
{
    this->longitud = v;
}

Cola::~Cola()
{
    while(primero)
        eliminar();
}

void Cola::buscarAficionados() {
    if (!primero) {
        cout << "La cola está vacía." << endl;
        return;
    }

    Aficionado* primerSocio = nullptr;
    Aficionado* ultimoSocio = nullptr;
    Aficionado* primerSimpatizante = nullptr;
    Aficionado* ultimoSimpatizante = nullptr;

    pnodoCola aux = primero;
    while (aux) {
        Aficionado* aficionado = aux->aficionado;
        if (aficionado->getIsSocio() == 1) {
            if (!primerSocio) {
                primerSocio = aficionado;
            }
            ultimoSocio = aficionado;
        } else if (aficionado->getIsSocio() == 0) {
            if (!primerSimpatizante) {
                primerSimpatizante = aficionado;
            }
            ultimoSimpatizante = aficionado;
        }
        aux = aux->siguiente;
    }

    cout << "El primer socio en acceder al estadio: ";
    if (primerSocio) {
        cout << primerSocio->getHoraLlegada() << endl;
    } else {
        cout << "No hay socios en la cola." << endl;
    }

    cout << "El ultimo socio en acceder al estadio: ";
    if (ultimoSocio) {
        cout << ultimoSocio->getHoraLlegada() << endl;
    } else {
        cout << "No hay socios en la cola." << endl;
    }

    cout << "El primer simpatizante en acceder al estadio: ";
    if (primerSimpatizante) {
        cout << primerSimpatizante->getHoraLlegada() << endl;
    } else {
        cout << "No hay simpatizantes en la cola." << endl;
    }

    cout << "El ultimo simpatizante en acceder al estadio: ";
    if (ultimoSimpatizante) {
        cout << ultimoSimpatizante->getHoraLlegada() << endl;
    } else {
        cout << "No hay simpatizantes en la cola." << endl;
    }
}


