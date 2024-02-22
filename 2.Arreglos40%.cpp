#include <iostream>
using namespace std;
struct Datos
{

    int numeros;
};
    int opcion;
    int datos;
    int cantidad=20;
int main (){

    Datos*numeros=new Datos;


    do{

    cout << "\n\n--- MENU ---\n\n";
    cout << "Seleccione una opcion: \n\n";
    cout << "1. Insertar datos\n";
    cout << "2. Mostrar datos\n";
    cout << "3. Salir\n";
    
    cout << "\nOpcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    double maximo;
    cout << "Ingrese el numero 1: " << endl;
    cin >> maximo;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Ingrese el numero " << i +2 << ": " << endl;
        cin >> datos;
    }

        break;
    case 2:
        for (int i = 0; i < 20; i++) {
            cout << datos<< endl;
    }
        break;
    case 3:
        cout<<"Saliendo del programa..."<<endl;
        break;

    default:
        cout<<"Opcion no valida."<<endl;
        break;
    }
    }
    while(opcion!=6);
    return 0;
}