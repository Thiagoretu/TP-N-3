#include <iostream>
using namespace std;

int main() {
    int numero; 
    int entrada; 
    int pares = 0; 
    int impares = 0;

    cout << "Ingrese la cantidad de numeros que desea ingresar:";
    cin >> numero;

    cout << "Ingrese " << numero << " nueros enteros:" << endl;
    for (int i = 0; i < numero; ++i) {
        cout << "Numero" << i + 1 << ": ";
        cin >> entrada;

        if (entrada % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Resultados:" << endl;
    cout << "Cantidad de numeros pares " << pares << endl;
    cout << "Cantidad de numeros impares" << impares << endl;

    return 0;
}

