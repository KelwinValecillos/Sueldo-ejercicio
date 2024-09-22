#include <iostream>
using namespace std;

int main() {
    float sueldo, nuevoSueldo;

    cout << "Ingrese el sueldo del trabajador: ";
    cin >> sueldo;
    
    if (sueldo < 1000) {
        nuevoSueldo = sueldo * 1.15; // Aumento del 15%
    } else {
        nuevoSueldo = sueldo * 1.12; // Aumento del 12%
    }

    cout << "El nuevo sueldo del trabajador es: $" << nuevoSueldo << endl;

    return 0;
}
