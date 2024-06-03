#include "NodoLista.hpp"

#ifndef LISTA_HPP
#define LISTA_HPP

class Lista
{
public:
    Lista (); 
    ~Lista ();
    
    void insertarNodo(Aficionado* af) ;
    bool listaVacia();
    
    // GETTES
    int getLongitud();
    Aficionado* getPrimero();
    Aficionado* getUltimo();
    
    // SETTES
    void setLogitud(int v);
    
private:
    pnodoLista principio, cabeza, actual, final;
    Aficionado* ultimo;
    Aficionado* primero;
    int longitud;
    
    // METODOS
    void mostrarLista(bool vista);
    void esUltimo(Aficionado* af);
    void esPrimero(Aficionado* af);
    void esCabeza();
    Aficionado* eliminar(bool modoEliminacion);
    
    friend class GestorDeportivo;
};



#endif // LISTA_HPP
