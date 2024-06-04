#ifndef COLA_HPP
#define COLA_HPP

#include <NodoCola.hpp>

class Cola
{
public:
    Cola();
    ~Cola();
    
    void insertar(Aficionado* af);
    Aficionado* eliminar();
    void mostrar();
    Aficionado* verPrimero();
    
    int getLongitud();
    void setLongitud(int v);
    
    // Metodo busqueda COLAS adicional
    void buscarAficionados();

private:
    pnodoCola primero, ultimo;
    int longitud;
};

#endif // COLA_HPP