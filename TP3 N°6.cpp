#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 2; i <= 100; i += 2) {
        cout << i;
        if (i < 100) {
            cout << " + ";
        } else {
            cout << " = ";
        }
        suma += i; 
    }

    cout << suma << endl;

    return 0; 
}

