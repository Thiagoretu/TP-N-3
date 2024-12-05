#include <iostream>
using namespace std;

int main() {
    int numero; 

    cout << "Por favor, ingresa un numero: ";
    cin >> numero;

    while (numero >= 0.01) {
        numero = numero /2;
        cout << "El numero actual es: " << numero << endl;
    }

    cout << "El numero final es menor que 0.01: " << numero << endl;

    return 0;
}

