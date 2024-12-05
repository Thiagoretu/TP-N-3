#include <iostream>
using namespace std;

int main() {
    int terminos = 25; 
    int inicio = 11;  

    for (int i = 0; i < terminos; ++i) {
        cout << inicio + i * 11 << " ";
    }

    cout << endl;

    return 0; 
}

