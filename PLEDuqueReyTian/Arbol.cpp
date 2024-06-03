#include "Arbol.hpp"

Arbol::Arbol() { raiz = nullptr; }
void Arbol::insertar(Aficionado* a) { raiz = insertar(raiz, a); }

// Funciones implementadas Tian Duque
vector<Aficionado*> Arbol::aficionadosSocios(pnodoAbb nodo)
/*
    void --> void
    OBJ: Recorre el subarbol IZQUIERDO de los SOCIOS y almacena los nodos en un vector 
*/
{
    vector<Aficionado*> socios;
    if (nodo == nullptr) {
        return socios;
    }
    
    inOrder(nodo->izq, socios);
    return socios;
}

vector<Aficionado*> Arbol::aficionadosSimpatizantes(pnodoAbb nodo)
/*
    void --> void
    OBJ: Recorre el subarbol DERECHO de los SIMPATIZANTES y almacena los nodos en un vector 
*/
{
    vector<Aficionado*> simpatizantes;
    if (nodo == nullptr) {
        return simpatizantes;
    }
    
    inOrder(nodo->der, simpatizantes);
    return simpatizantes;
}

void Arbol::inOrder(pnodoAbb nodo, vector<Aficionado*>& aficionados) 
/*
    void --> void
    OBJ: Almacena el aficionado (socio o simpatizante) en su correspondiente vector
*/
{
    if (nodo == nullptr) {
        return;
    }
    
    inOrder(nodo->izq, aficionados);
    aficionados.push_back(nodo->aficionado);
    inOrder(nodo->der, aficionados);
}










// FUNCIONES POR DEFECTO =================================================================

pnodoAbb Arbol::insertar(pnodoAbb nodo, Aficionado* af)
{
    if(!nodo)
        return new NodoArbol(af);
    if (af->getIdentificador() == nodo->aficionado->getIdentificador())
    {
        cout << "El nodo con el mismo valor ya existe, no se inserta nuevamente" << endl;
        return nodo;
    }    
    
    if(af->getIdentificador() <= nodo->aficionado->getIdentificador())
        nodo->izq = insertar(nodo->izq, af);
    else
        nodo->der = insertar(nodo->der, af);
    return nodo;
}


void Arbol::pintar()
{
    pintar(raiz);
    cout << '\n';
}

void Arbol::pintar(pnodoAbb nodo)
{
    if(!nodo)
        return;
    pintar(nodo->izq);
    cout << nodo->aficionado << " ";
    pintar(nodo->der);
}
int Arbol::altura(pnodoAbb nodo)
{
    if(!nodo)
        return 0;
    return 1 + max(altura(nodo->izq), altura(nodo->der));
}

void Arbol::dibujarNodo(vector<string>& output, vector<string>& linkAbove, pnodoAbb nodo, int nivel, int af,
                        char linkChar)
{
    if(!nodo)
        return;

    int h = output.size();
    string SP = " ";

    if(af < 0) {
        string extra(-af, ' ');
        for(string& s : output)
            if(!s.empty())
                s = extra + s;
        for(string& s : linkAbove)
            if(!s.empty())
                s = extra + s;
    }
    if(nivel < h - 1)
        af = max(af, (int)output[nivel + 1].size());
    if(nivel > 0)
        af = max(af, (int)output[nivel - 1].size());
    af = max(af, (int)output[nivel].size());

    if(nodo->izq) {
        int numeroQueQuieroImprimirEnElArbol = nodo->izq->aficionado->getIdentificador(); // En vez de este valor, tenéis que coger el número de la habitación del paciente.
        string izqdato = SP + to_string(numeroQueQuieroImprimirEnElArbol) + SP;
        dibujarNodo(output, linkAbove, nodo->izq, nivel + 1, af - izqdato.size(), 'L');
        af = max(af, (int)output[nivel + 1].size());
    }

    int space = af - output[nivel].size();
    if(space > 0)
        output[nivel] += string(space, ' ');
    int numeroQueQuieroImprimirEnElArbol = nodo->aficionado->getIdentificador(); // En vez de este valor, tenéis que coger el número de la habitación del paciente.
    string nododato = SP + to_string(numeroQueQuieroImprimirEnElArbol) + SP;
    output[nivel] += nododato;

    space = af + SP.size() - linkAbove[nivel].size();
    if(space > 0)
        linkAbove[nivel] += string(space, ' ');
    linkAbove[nivel] += linkChar;

    if(nodo->der)
        dibujarNodo(output, linkAbove, nodo->der, nivel + 1, output[nivel].size(), 'R');
}

void Arbol::dibujar()
{
    int h = altura(raiz);
    vector<string> output(h), linkAbove(h);
    dibujarNodo(output, linkAbove, raiz, 0, 5, ' ');

    for(int i = 1; i < h; i++) {
        for(auto j = 0; j < linkAbove[i].size(); j++) {
            if(linkAbove[i][j] != ' ') {
                int size = output[i - 1].size();
                if(size < j + 1)
                    output[i - 1] += string(j + 1 - size, ' ');
                int jj = j;
                if(linkAbove[i][j] == 'L') {
                    while(output[i - 1][jj] == ' ')
                        jj++;
                    for(int k = j + 1; k < jj - 1; k++)
                        output[i - 1][k] = '_';
                } else if(linkAbove[i][j] == 'R') {
                    while(output[i - 1][jj] == ' ')
                        jj--;
                    for(int k = j - 1; k > jj + 1; k--)
                        output[i - 1][k] = '_';
                }
                linkAbove[i][j] = '|';
            }
        }
    }

    cout << '\n' << '\n';
    for(int i = 0; i < h; i++) {
        if(i)
            cout << linkAbove[i] << '\n';
        cout << output[i] << '\n';
    }
    cout << '\n' << '\n';
}

Arbol::~Arbol() {}
