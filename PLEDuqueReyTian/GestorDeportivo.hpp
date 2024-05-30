#include <iostream>
#include "Pila.hpp"
#include "ControlDeportivo.hpp"


#ifndef GestorDeportivo_HPP
#define GestorDeportivo_HPP

class GestorDeportivo
{
public:
    GestorDeportivo();
    
    //INTERFAZ PARTE 1
    void rellenarPilas(); // Option A
    void borraPedidosPila(); // Option I
    void mostrarPilas();
    

    ~GestorDeportivo();

    
private: 
    
    //ESTRUTURAS PARTE 1
    ControlDeportivo* controlDeportivo;
    Pila* pila_A;
    Pila* pila_B;

};

#endif // GestorDeportivo_HPP

