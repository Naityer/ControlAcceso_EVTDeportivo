#ifndef GestorDeportivo_HPP
#define GestorDeportivo_HPP

#include <iostream>
#include <algorithm> // Impllementa sort para vectores
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
    void borrarAficionadosPila(); // Option B
    void mostrarPilas(); // Option C
    void generarAficionados(); // Option D
    void dibujar_ABB();  // Option X
    void enListarAficionados(); // Option E
    void mostrarListas(); // Option F
    void borrarListas(); // Option G
    void enColarAficionados(); // Option H
    void mostrarCola(); // Option I
    void borrarColas(); // Option J
    void mostarAficionados(int valor); // Option K, L, M
    void buscar_ABB(); // Option N
    void borrarAficionado_ABB(); // Option O
    void buscarAficionadosColas(); // Option P
    void reiniciar(); // Option R
    void borrarArbol();
    ~GestorDeportivo();
    
    // Funciones complementarias a mostarAficionados(int valor)
    void sortByID(vector<Aficionado*>& aficionados);
    void imprimir(const vector<Aficionado*>& aficionados);
    
    // INTERFAZ SUPERIOR MAIN
    int cantidadPilaA();
    int cantidadPilaB();
    int AficionadoEnListaSocios();
    int AficionadoEnListaEstandar();
    int AficionadoEnCola();
    int AficionadoEnArbol();

private: 
    
    //ESTRUTURAS PARTE 1
    ControlDeportivo* controlDeportivo;
    Pila* pila_A;
    Pila* pila_B;
    Arbol* arbol; 
    Lista* socios;
    Lista* simpatizantes;
    Cola* colaAficionados;
};

#endif // GestorDeportivo_HPP

