#ifndef ControlDeportivo_HPP
#define ControlDeportivo_HPP

#include <iostream>
#include <vector>
#include <cstdlib> 

using namespace std;

class ControlDeportivo
{
public:
    ControlDeportivo();

//ATRIBUTOS
    int indiceAleatorio;
    int numeroSelecionado;
    
    vector<int> pilaA_aux;
    vector<int> pilaB_aux;
    vector<int> rangoID;
    ~ControlDeportivo();
        
private:
    
//METODOS
    void generarRangoUnico();
    int numero_PilasA();
    int numero_PilasB();
    
    friend class GestorDeportivo;
};

#endif // ControlDeportivo_HPP
