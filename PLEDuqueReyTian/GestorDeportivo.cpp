#include "GestorDeportivo.hpp"

GestorDeportivo::GestorDeportivo()
{
    pila_A = new Pila();
    pila_B = new Pila();
    arbol = new Arbol();
    socios = new Lista();
    simpatizantes = new Lista();
    colaAficionados = new Cola();
    
    controlDeportivo = new ControlDeportivo();
    controlDeportivo->generarRangoUnico();
}

// ZONA PILAS ====================================================================================================

void GestorDeportivo::rellenarPilas() 
/*
    void --> void
    OBJ: Almacenar 20 numeros en la pila_A y pila_B
    PRE: Haber generado Arrays de los rangos requeridos
*/
{
    borrarAficionadosPila() ;
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
}

void GestorDeportivo::borrarAficionadosPila() 
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


// ZONA ARBOLES ====================================================================================================

void GestorDeportivo::generarAficionados()
/*
    void --> void 
    OBJ: Almacenar en un ABB: nodo raiz (ID = 50) + aficionados con id extraido de la pila_A y su horaLlegada de la pila_B
    PRE: Las pilas no esten vacias
*/
{
    borrarArbol();
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

void GestorDeportivo::mostarAficionados(int valor)
/*
    void --> void
    OBJ: Dependiendo del valor dado muestra por pantalla (ORDENADOS MENOR A MAYOR) 
            Valor = 0. Muestra los TODOS los aficionados 
            Valor = 1. Muestra los SOCIOS
            Valor = 2. Muestra los SIMPATIZANTES
    PRE: Valor > 0 y Valor < 3
*/
{
    vector<Aficionado*> aficionados;
    vector<Aficionado*> ABBsocios = arbol->aficionadosSocios(arbol->raiz);
    vector<Aficionado*> ABBsimpatizantes = arbol->aficionadosSimpatizantes(arbol->raiz);
    
    // Insertar elementos de ABBsocios en aficionados
    aficionados.insert(aficionados.end(), ABBsocios.begin(), ABBsocios.end());
    // Insertar elementos de ABBsimpatizantes en aficionados
    aficionados.insert(aficionados.end(), ABBsimpatizantes.begin(), ABBsimpatizantes.end());
    
    if (valor == 0) { sortByID(aficionados); imprimir(aficionados); }
    else if (valor == 1) { sortByID(ABBsocios); imprimir(ABBsocios); }
    else if (valor == 2) { sortByID(ABBsimpatizantes); imprimir(ABBsimpatizantes); }
    
}

void GestorDeportivo::sortByID(vector<Aficionado*>& aficionados) {
/*
    void --> void
    OBJ: Ordena por ID el vector (F(X) complementaria de mostarAficionados) 
    PRE: Vector no vacio
*/
    sort(aficionados.begin(), aficionados.end(), [](Aficionado* a, Aficionado* b) {
        return a->getIdentificador() < b->getIdentificador();
    });
}

void GestorDeportivo::imprimir(const vector<Aficionado*>& aficionados) {
/*
    void --> void
    OBJ: Imprime el contenido de un vector dado (F(X) complementaria de mostarAficionados) 
    PRE: Vector no vacio
*/
    for (const auto& aficionado : aficionados) {
        aficionado->mostrar();
    }
    cout << endl;
}

void GestorDeportivo::borrarAficionado_ABB()
{
    arbol->dibujar();
    int elementoAEliminar;
    cout << "Eliminar AFICIONADO con IDENTIFICADOR: ";
    cin >> elementoAEliminar;

    // Llamar a la función para borrar el elemento
    arbol->borrarElemento(elementoAEliminar, arbol->raiz);
    arbol->dibujar();
}

void GestorDeportivo::buscar_ABB()
{
    int valMinLlegada = arbol->buscarAvazando(arbol->raiz, PRIMER_SOCIO);
    cout << "El SOCIO cuya hora de llegada es el menor: 18:" << (valMinLlegada < 10 ? "0" : "") << valMinLlegada << endl;
    
    int valMaxLlegada = arbol->buscarAvazando(arbol->raiz, ULTIMO_SOCIO);
    cout << "El SOCIO cuya hora de llegada es el mayor: 18:" << (valMaxLlegada < 10 ? "0" : "") << valMaxLlegada << endl;
    
    int valMenorLlegada = arbol->buscarAvazando(arbol->raiz, PRIMER_SIMPATIZNATE);
    cout << "El SIMPATIZANTE cuya hora de llegada es el menor: 18:" << (valMenorLlegada < 10 ? "0" : "") << valMenorLlegada << endl;
    
    int valMayorLlegada = arbol->buscarAvazando(arbol->raiz, ULTIMO_SIMPATIZNATE);
    cout << "El SIMPATIZANTE cuya hora de llegada es el mayor: 18:" <<  (valMayorLlegada < 10 ? "0" : "") << valMayorLlegada << endl;
    
    cout << "/n"; 
}

void GestorDeportivo::borrarArbol()
/*
    void --> void
    OBJ: Borra el contenido del arbol  
*/
{
    arbol->~Arbol();
    arbol->setCantidad(0);
}

// ZONA LISTAS ====================================================================================================
void GestorDeportivo::enListarAficionados() 
/*
    void --> void
    OBJ: Toma el subarbol izquiero: socios y el subarbol derecho: simpatizantes para inserterlos en las listas
    PRE: ABB no vacio
*/
{
    borrarListas();
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

// ZONA COLAS ====================================================================================================
void GestorDeportivo::enColarAficionados() 
/*
    void --> void
    OBJ: Almacena los aficionados de las dos listas en una cola  
*/
{
    borrarColas();
    while(socios->getLongitud() > 0 || simpatizantes->getLongitud() > 0)
    {
        if (socios->getLongitud() > 0) {
            colaAficionados->insertar(socios->eliminar(1));
            
        } else {
            colaAficionados->insertar(simpatizantes->eliminar(1));   
        }
    }
}

void GestorDeportivo::mostrarCola()
/*
    void --> void
    OBJ: Muestra el contenido de la cola  
*/
{
    colaAficionados->mostrar();
}

void GestorDeportivo::borrarColas()
/*
    void --> void
    OBJ: Borra el contenido de la cola  
*/
{
    colaAficionados->~Cola();
    colaAficionados->setLongitud(0);
}

void GestorDeportivo::buscarAficionadosColas()
{
    colaAficionados->buscarAficionados();
}

void GestorDeportivo::reiniciar()
{
    borrarAficionadosPila();
    borrarColas();
    borrarListas();
    borrarArbol();
}


GestorDeportivo::~GestorDeportivo() { }


// INTERFAZ SUPERIOR
int GestorDeportivo::cantidadPilaA()
{
    return pila_A->getLongitud();
}

int GestorDeportivo::cantidadPilaB()
{
    return pila_B->getLongitud();
}

int GestorDeportivo::AficionadoEnListaSocios()
{
    return socios->getLongitud();
}

int GestorDeportivo::AficionadoEnListaEstandar()
{
    return simpatizantes->getLongitud();
}

int GestorDeportivo::AficionadoEnCola()
{
    return colaAficionados->getLongitud();
}

int GestorDeportivo::AficionadoEnArbol()
{
    return arbol->cantidad;
}
