#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

#include <cstdlib> 
#include <iomanip> // Para setw y left

class Aficionado
{
private:

//ATRIBUTOS
    int identificador;
    int horaLlegada; // minutos
    bool isSocio; // True == Socio ; False = Simpatizante
    
    friend class Arbol;
    
public:
    Aficionado();
    ~Aficionado();
    
    Aficionado(int identificador, bool isSocio, int horaLlegada);
    void mostrar();
    
    // GETTER
    int getIdentificador();
    int getHoraLlegada();
    bool getIsSocio();
    
    //SETTER
    int setIdentificador(int id);
};

#endif // AFICIONADO_HPP
