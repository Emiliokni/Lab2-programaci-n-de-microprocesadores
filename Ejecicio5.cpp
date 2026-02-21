#include <iostream>
#include <string>
using namespace std;

int main() {

    const double DESCUENTO = 0.15;

    string nombre;
    int edad;
    double precio;
    char opcion;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    if (edad >= 18) {

        double precioFinal = precio - (precio * DESCUENTO);
        double total = precioFinal;

        cout << "Precio con descuento: " << total << endl;
    }
    else {
        cout << "No aplica descuento." << endl;
    }

    cout << "Cuantas veces desea repetir su nombre? ";
    int veces;
    cin >> veces;

    for (int i = 0; i < veces; i++) 
        cout << nombre << endl;

    int contador = 0;

    while (contador < 3) {
        cout << "Contador: " << contador << endl;
        contador++;
    } 

    return 0;
}