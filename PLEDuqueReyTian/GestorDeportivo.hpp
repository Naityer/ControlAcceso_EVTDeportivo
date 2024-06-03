#ifndef GestorDeportivo_HPP
#define GestorDeportivo_HPP

#include <iostream>
#include "Pila.hpp"
#include "Arbol.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include "ControlDeportivo.hpp"

class GestorDeportivo
{
public:

    GestorDeportivo();
    //INTERFAZ PARTE 1
    void rellenarPilas(); // Option A
    void borraPedidosPila(); // Option B
    void mostrarPilas(); // Option C
    void generarAficionados(); // Option D
    void dibujar_ABB();  // Option X
    void enlistarAficionados(); // Option E
    void mostrarListas(); // Option F
    ~GestorDeportivo();
    
private: 
    
    //ESTRUTURAS PARTE 1
    ControlDeportivo* controlDeportivo;
    Pila* pila_A;
    Pila* pila_B;
    Arbol* arbol; 
    Lista* socios;
    Lista* simpatizantes;
};

#endif // GestorDeportivo_HPP

