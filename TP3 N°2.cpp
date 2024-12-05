#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0; 

    cout << "Por favor, ingresa 10 valores:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> numeros[i];

        suma += numeros[i];
    }

    int promedio = suma / 10;

    cout << "Resultado:" << endl;
    cout << "Suma de los valores ingresados: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0; 
}

