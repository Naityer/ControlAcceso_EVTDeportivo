#ifndef ARBOL_HPP
#define ARBOL_HPP

#include "NodoArbol.hpp"

using namespace std;

// Estructura predefinida de busqueda en el arbol
enum TipoBusqueda {
    PRIMER_SOCIO,
    ULTIMO_SOCIO,
    PRIMER_SIMPATIZNATE,
    ULTIMO_SIMPATIZNATE
};

class Arbol
{
public:
    Arbol();
    void insertar(Aficionado* a);
    void pintar();
    void dibujar();
    ~Arbol();
    
    // FUNCIONES IMPLEMENTADAS 
    vector<Aficionado*> aficionadosSocios(pnodoAbb nodo);
    vector<Aficionado*> aficionadosSimpatizantes(pnodoAbb nodo);
    
    void inOrder(pnodoAbb nodo, vector<Aficionado*>& socios);
    void destruirArbol(pnodoAbb nodo);
    
    // FUNCIONES PARA ELIMINAR EN EL ARBOL
    pnodoAbb borrarElemento(int elementoAEliminar, pnodoAbb nodo);
    pnodoAbb borrarNodo(pnodoAbb nodo);
    int maximo(pnodoAbb nodo);
    
    // BUASCAR ELEMENTO EN EL ARBOL
    int buscarAvazando(pnodoAbb nodo, TipoBusqueda tipo);
    
    // Metodos complementarios de busqueda
    int primerSocio(pnodoAbb nodo);
    int ultimoSocio(pnodoAbb nodo);
    int primerSimpatizante(pnodoAbb nodo);
    int ultimoSimpatizante(pnodoAbb nodo);
    
    int getCantidad();
    void setCantidad(int v);
    
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
