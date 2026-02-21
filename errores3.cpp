#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (1..20): ";
    cin >> n;

    if (n > 20) n = 20;
    if (n < 1) n = 1;

    const int limite = n;

    vector<int> valores(limite);

    for (int i = 0; i < limite; i++) {
        valores[i] = i * i;
    }

    int suma = 0;
    for (int x : valores) {
        suma += x;
    }

    cout << "Suma de cuadrados: " << suma << endl;

    return 0;
}