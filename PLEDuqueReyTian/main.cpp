#include <GestorDeportivo.hpp>
#include <ControlDeportivo.hpp>
#include "GestorDeportivo.hpp"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    GestorDeportivo gestor;
    char opcion;
    
    // Establecer una nueva semilla basada en el tiempo actual
    srand(static_cast<unsigned int>(time(0)));
    
    do {
        
        cout << "\n\t--------------------------------------------------------------\n";
        cout << "\tNumeros aleatorios PILA (A) -> " << gestor.cantidadPilaA() << "\n";
        cout << "\tNumeros aleatorios PILA (B) -> " << gestor.cantidadPilaB() << "\n";
        cout << "\tAficionados en el arbol -> " << gestor.AficionadoEnArbol() << "\n";
        cout << "\tAficionados en las listas:\n";
        cout << "\t\tSOCIOS-> " << gestor.AficionadoEnListaSocios() << "\n";
        cout << "\t\tSIMPATIZANTES-> " << gestor.AficionadoEnListaEstandar() << "\n";
        cout << "\tAficionados en las colas:\n";
        cout << "\t\tColasAficionados -> " << gestor.AficionadoEnCola() << "\n";
        cout << "\t----------------------------------------------------------------\n\n";


        cout << "\tA. Generar y almacenar numeros aleatorios en las pilas.\n";
        cout << "\tB. Mostrar el contenido de las dos pilas.\n";
        cout << "\tC. Borrar el contenido de las dos pilas.\n";
        cout << "\tD. Generar aficionados y almacenarlos en un ABB.\n";
        cout << "\tX. Dibujar el ABB generado.\n";
        cout << "\tE. Insertar los aficionados del ABB en las dos listas.\n";
        cout << "\tF. Mostrar los aficionados en las dos listas.\n";
        cout << "\tG. Borrar el contenido de las dos listas.\n";
        cout << "\tH. Insertar los aficionados de las listas en la cola.\n";
        cout << "\tI. Mostrar los aficionados en la cola.\n";
        cout << "\tJ. Borrar el contenido de la cola.\n";
        cout << "\tK. Mostrar aficionados en el ABB ordenados por ID.\n";
        cout << "\tL. Mostrar socios en el ABB ordenados por ID.\n";
        cout << "\tM. Mostrar simpatizantes en el ABB ordenados por ID.\n";
        cout << "\tN. Buscar y mostrar en el ABB los primeros y ultimos socios y simpatizantes en acceder al estadio.\n";
        cout << "\tO. Eliminar un aficionado del ABB por su ID y mostrar el arbol resultante.\n";
        cout << "\tP. Buscar y mostrar en la cola los primeros y ultimos socios y simpatizantes en acceder al estadio.\n";
        cout << "\tR. Reiniciar el programa a su estado inicial.\n";
        cout << "\tS. Salir del programa.\n";
        

        cout << "\tIndique la opcion deseada: ";
        cin >> opcion;
        opcion = toupper(opcion);
        // system("clear");
        system("cls");

        switch(opcion) {

        case 'A':
            gestor.rellenarPilas(); 
            break;
        case 'B':
            gestor.mostrarPilas();
            break;
        case 'C':
            gestor.borrarAficionadosPila();;
            break;
        case 'D':
            gestor.generarAficionados();
            break;
        case 'X':
            gestor.dibujar_ABB();
            break;
        case 'E':
            gestor.enListarAficionados();
            break;
        case 'F':
            gestor.mostrarListas();
            break;
        case 'G':
            gestor.borrarListas();
            break;
        case 'H':
            gestor.enColarAficionados();
            break;
        case 'I':
            gestor.mostrarCola();
            break;
        case 'J':
            gestor.borrarColas();
            break;
        case 'K':
            gestor.mostarAficionados(0);
            break;
        case 'L':
            gestor.mostarAficionados(1);
            break;
        case 'M':
            gestor.mostarAficionados(2);
            break;
        case 'N':
            gestor.buscar_ABB();
            break;
        case 'O':
            gestor.borrarAficionado_ABB();
            break;
        case 'P':
            gestor.buscarAficionadosColas();
            break;
        case 'R':
            gestor.reiniciar();
            break;
        case 'S':
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion incorrecta!\n\n";
            break;
        }
    } while(opcion != 'S');

    return 0;
}
