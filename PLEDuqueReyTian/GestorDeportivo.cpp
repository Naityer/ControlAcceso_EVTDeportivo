#include "GestorDeportivo.hpp"

GestorDeportivo::GestorDeportivo()
{
    pila_A = new Pila();
    pila_B = new Pila();
    arbol = new Arbol();
    socios = new Lista();
    simpatizantes = new Lista();
    
    controlDeportivo = new ControlDeportivo();
    controlDeportivo->generarRangoUnico();
}

// ZONA PILAS

void GestorDeportivo::rellenarPilas() 
/*
    void --> void
    OBJ: Almacenar 20 numeros en la pila_A y pila_B
    PRE: Haber generado Arrays de los rangos requeridos
*/
{
    borraPedidosPila();
    for(auto i = 1; i <= 20; i++) {
        int valor_A = controlDeportivo->numero_PilasA();
        pila_A->insertar(valor_A);
        int valor_B = controlDeportivo->numero_PilasB();
        pila_B->insertar(valor_B);
    }
    
}

void GestorDeportivo::mostrarPilas()
/*
    void --> void
    OBJ: Mostrar por pantalla el contenido de las Pilas
    PRE: No se mostrara nada si la pila esta vacia
*/
{
    
    pila_A->mostrar();
    pila_B->mostrar();
    cout << "CANTIDAD PILA (A)  = " << pila_A->getLongitud() << endl;
    cout << "CANTIDAD PILA (B) = " << pila_B->getLongitud() << endl;
}

void GestorDeportivo::borraPedidosPila() 
/*
    void --> void
    OBJ: Eliminar el contenido de las pilas llamando a los destructores
    PRE: -
*/
{
    pila_A->~Pila();
    pila_B->~Pila();
    pila_A->setLongitud(0);
    pila_B->setLongitud(0);
}


// ZONA ARBOLES

void GestorDeportivo::generarAficionados()
/*
    void --> void 
    OBJ: Almacenar en un ABB: nodo raiz (ID = 50) + aficionados con id extraido de la pila_A y su horaLlegada de la pila_B
    PRE: Las pilas no esten vacias
*/
{
    Aficionado* aficionado;
    Aficionado* aficionadoFicticio = new Aficionado(50, 1, 0);
    arbol->insertar(aficionadoFicticio);
    
    for(auto i = 1; i <= 20; i++) {
        
        // Pila_A
        int id = pila_A -> extraer();
        int horaLlegada = pila_B -> extraer();
        bool isSocio = id <= 50 ? true : false;
        
        // Aficionado(int identificador, bool isSocio, int horaLlegada);
        aficionado = new Aficionado(id, isSocio, horaLlegada);
        arbol->insertar(aficionado);
        
    }
    
}

void GestorDeportivo::dibujar_ABB() 
/*
    void --> void
    OBJ: Dibuja el contenido del ABB generado en la opcion D
    PRE: ABB no vacio
*/
{
    arbol->dibujar();
}

// ZONA LISTAS
void GestorDeportivo::enlistarAficionados() 
/*
    void --> void
    OBJ: Toma el subarbol izquiero: socios y el subarbol derecho: simpatizantes para inserterlos en las listas
    PRE: ABB no vacio
*/
{
    
    vector<Aficionado*> ABBsocios = arbol->aficionadosSocios(arbol->raiz);
    vector<Aficionado*> ABBsimpatizantes = arbol->aficionadosSimpatizantes(arbol->raiz);
    
    for (auto aficionado : ABBsocios) {
        socios->insertarNodo(aficionado);
    }

    for (auto aficionado : ABBsimpatizantes) {
        simpatizantes->insertarNodo(aficionado);
    }
}

void GestorDeportivo::mostrarListas()
/*
    void --> void
    OBJ: Muestra el contenido de la lista de socios y simpatizantes
    PRE: Listas no vacias
*/
{
    socios->mostrarLista(1);
    simpatizantes->mostrarLista(1);
}

void GestorDeportivo::borrarListas()
/*
    void --> void
    OBJ: Elimina el contenido de las listas 
*/
{
    socios->~Lista();
    simpatizantes->~Lista();
}


GestorDeportivo::~GestorDeportivo()
/*
    void --> void
    OBJ: 
    PRE:
*/
{
}

