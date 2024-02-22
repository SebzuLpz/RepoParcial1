#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;  
};

Nodo* cabeza = NULL;
Nodo* cola = NULL;

void insertarNodo() {
    int x; 
    string linea;
    cout << "Ingrese dato: ";
    getline(cin, linea);
    
    try {
    x = stoi(linea);
    } catch (invalid_argument& e) {
    cout << "Error: Por favor ingrese un número entero." << endl;
    return;
    }
    
    Nodo* nuevo = new Nodo();  
    nuevo->dato = x;
    nuevo->siguiente = NULL;

    if(cabeza == NULL) { 
    cabeza = nuevo;
    cola = nuevo;
    } else {
    cola->siguiente = nuevo;
    cola = nuevo;
    }  
}

void mostrarLista() {
    
    Nodo* actual = cabeza;
    while(actual != NULL) {
    cout <<  actual->dato; cout<< " ";
    actual = actual->siguiente;
    }
}  



int main() {

    int opcion;

    while(true) {

    cout << "\n\n--- MENU ---\n\n";
    cout << "Seleccione una opcion: \n\n";
    cout << "1. Insertar nodo\n";
    cout << "2. Mostrar lista\n";
    cout << "3. Salir\n";
    
    cout << "\nOpcion: ";
    cin >> opcion;
    cin.ignore();

    if(opcion == 1) {
        insertarNodo(); 
    } else if(opcion == 2) {
        mostrarLista();
    } else if(opcion == 3) {
        break;
    } 
    }
    
    return 0;
}