#include <iostream>
using namespace std;

int main() {
    int num; 

    cout << "Introduzca un número entero: ";
    cin >> num;

    int doble = num * 2;
    int triple = num * 3;

    cout << "El doble del número es: " << doble << endl;
    cout << "El triple del número es: " << triple << endl;

    return 0;
}
