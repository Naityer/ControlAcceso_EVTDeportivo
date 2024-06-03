#ifndef ARBOL_HPP
#define ARBOL_HPP

#include "NodoArbol.hpp"

using namespace std;

class Arbol
{
public:
    Arbol();
    void insertar(Aficionado* a);
    void pintar();
    void dibujar();
    ~Arbol();
    
    // Funciones adicionales
    vector<Aficionado*> aficionadosSocios(pnodoAbb nodo);
    vector<Aficionado*> aficionadosSimpatizantes(pnodoAbb nodo);
    
    void inOrder(pnodoAbb nodo, vector<Aficionado*>& socios);

private:
 
    int cantidad;
    pnodoAbb raiz;
    pnodoAbb insertar(pnodoAbb, Aficionado* a);
    void pintar(pnodoAbb);
    int altura(pnodoAbb);
    void dibujarNodo(vector<string>& output, vector<string>& linkAbove, pnodoAbb nodo, int nivel, int minPos,
                     char linkChar);
       
    friend class GestorDeportivo;
};

#endif // ARBOL_HPP
