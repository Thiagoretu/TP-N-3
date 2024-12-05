#include <iostream>
using namespace std;

int main() {
    int cantidad_impares = 0; 
    int suma_impares = 0; 

    for (int i = 1; i <= 300; ++i) {
        if (i % 2 != 0) { 
            cantidad_impares++; 
            suma_impares += i; 
        }
    }

    cout << "Cantidad de numeros impares entre 1 y 300: " << cantidad_impares << endl;
    cout << "Sumatoria de los numeros impares: " << suma_impares << endl;

    return 0; 
}

