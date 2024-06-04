#include "Lista.hpp"

Lista::Lista()
{
    longitud = 0;
    principio = cabeza = actual = final = NULL;
}

void Lista::insertarNodo(Aficionado* af) {
    
    pnodoLista aux;
    if (listaVacia()) {
        aux = new NodoLista(af, NULL, NULL);
        final = cabeza = aux;
    } else if (final->aficionado->getHoraLlegada() <= af->getHoraLlegada()) { // Inserción por el final
        aux = new NodoLista(af, NULL, final);
        final->siguiente = aux;
        final = aux;
        esUltimo(aux->aficionado);
    } else if (cabeza->aficionado->getHoraLlegada() > af->getHoraLlegada()) { // Inserción por el principio
        aux = new NodoLista(af, cabeza, NULL);
        cabeza->anterior = aux;
        principio = cabeza = aux;
        esPrimero(aux->aficionado);
    } else { // Inserción en medio de la lista
        pnodoLista actual = cabeza->siguiente;
        while (actual->aficionado->getHoraLlegada() < af->getHoraLlegada()) {
            actual = actual->siguiente;
        }
        aux = new NodoLista(af, actual, actual->anterior);
        actual->anterior->siguiente = aux;
        actual->anterior = aux;
    }
    
    // Después de la inserción, enlazar los últimos paquetes al anterior
    if (final->anterior != NULL) {
        final->anterior->siguiente = final;
    }
    
    this->longitud++;
}

void Lista::mostrarLista(bool vista)
{
    pnodoLista aux = (vista) ? cabeza : final;
    cout << "El contenido de la LISTA es: " << endl;
    cout << "==========================================================================================================\n" << endl;
    
    while (aux) {
        aux->aficionado->mostrar();
        aux = (vista) ? aux->siguiente : aux->anterior;
    }
    cout << "\n" << endl;
}

Aficionado* Lista::eliminar(bool modoEliminacion) \
{
    
    if (listaVacia()) {
        cout << "La lista está vacía. No se puede eliminar ningún nodo." << endl;
        return nullptr;
    }

    Aficionado* delAficioando;
    pnodoLista aux;

    if (modoEliminacion) {  // Modo eliminación normal (desde el principio)
        aux = cabeza;
        if (cabeza == final) {  // Solo hay un elemento en la lista
            cabeza = final = nullptr;
        } else {
            cabeza = cabeza->siguiente;
            cabeza->anterior = nullptr;
        }
    } else {  // Modo eliminación en sentido contrario (desde el final)
        aux = final;
        if (cabeza == final) {  // Solo hay un elemento en la lista
            cabeza = final = nullptr;
        } else {
            final = final->anterior;
            final->siguiente = nullptr;
        }
    }

    delAficioando = aux->aficionado;
    delete aux;

    this->longitud--;

    return delAficioando;
}

bool Lista::listaVacia()
{
    return cabeza == NULL;
}

void Lista::esCabeza()
{
    actual = cabeza;
}

void Lista::esUltimo(Aficionado* af)
{
    this->ultimo = af;
}

void Lista::esPrimero(Aficionado* af) 
{
    this->primero = af;
}

//GETTER

int Lista::getLongitud()
{
    return longitud;
}

void Lista::setLogitud(int v)
{
    this->longitud = v;
}

Aficionado* Lista::getPrimero()
{
    return primero;
}

Aficionado* Lista::getUltimo()
{
    return ultimo;
}

Lista::~Lista()
{
    pnodoLista aux;
    while (cabeza) {
        aux = cabeza;
        cabeza = cabeza->siguiente;
        longitud--;
        delete aux;
    }
    
    cabeza = NULL;
    actual = NULL;
    final = NULL;
}

