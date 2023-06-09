#include <iostream>
using namespace std;

int main() {
    // Pedir al usuario que introduzca la medida en yardas
    float yardas;
    cout << "Introduzca la medida en yardas: ";
    cin >> yardas;

    // Convertir a pies
    float pies = yardas * 3;

    // Convertir a pulgadas
    float pulgadas = pies * 12;

    // Convertir a centímetros
    float centimetros = pulgadas * 2.54;

    // Convertir a metros
    float metros = centimetros / 100;

    // Mostrar resultados
    cout << yardas << " yardas equivalen a:" << endl;
    cout << pies << " pies" << endl;
    cout << pulgadas << " pulgadas" << endl;
    cout << centimetros << " centimetros" << endl;
    cout << metros << " metros" << endl;

    return 0;
}
