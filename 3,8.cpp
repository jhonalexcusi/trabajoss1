#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    double cantidad;
    int billetes_500, billetes_200, billetes_100, billetes_50, billetes_20, billetes_10, billetes_5;
    int monedas_2, monedas_1, monedas_50c, monedas_20c, monedas_10c, monedas_5c;

    // Solicitar la cantidad al usuario
    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad;

    // Calcular el cambio en billetes y monedas
    billetes_500 = cantidad / 500;
    cantidad = cantidad - (billetes_500 * 500);

    billetes_200 = cantidad / 200;
    cantidad = cantidad - (billetes_200 * 200);

    billetes_100 = cantidad / 100;
    cantidad = cantidad - (billetes_100 * 100);

    billetes_50 = cantidad / 50;
    cantidad = cantidad - (billetes_50 * 50);

    billetes_20 = cantidad / 20;
    cantidad = cantidad - (billetes_20 * 20);

    billetes_10 = cantidad / 10;
    cantidad = cantidad - (billetes_10 * 10);

    billetes_5 = cantidad / 5;
    cantidad = cantidad - (billetes_5 * 5);

    monedas_2 = cantidad / 2;
    cantidad = cantidad - (monedas_2 * 2);

    monedas_1 = cantidad / 1;
    cantidad = cantidad - (monedas_1 * 1);

    monedas_50c = cantidad / 0.50;
    cantidad = cantidad - (monedas_50c * 0.50);

    monedas_20c = cantidad / 0.20;
    cantidad = cantidad - (monedas_20c * 0.20);

    monedas_10c = cantidad / 0.10;
    cantidad = cantidad - (monedas_10c * 0.10);

    monedas_5c = cantidad / 0.05;

    // Imprimir el cambio en billetes y monedas
    cout << "\nCambio en billetes y monedas:\n";
    cout << "Billetes de 500 euros: " << billetes_500 << endl;
    cout << "Billetes de 200 euros: " << billetes_200 << endl;
    cout << "Billetes de 100 euros: " << billetes_100 << endl;
    cout << "Billetes de 50 euros: " << billetes_50 << endl;
    cout << "Billetes de 20 euros: " << billetes_20 << endl;
    cout << "Billetes de 10 euros: " << billetes_10 << endl;
    cout << "Billetes de 5 euros: " << billetes_5 << endl;
    cout << "Monedas de 2 euros: " << monedas_2 << endl;
    cout << "Monedas de 1 euro: " << monedas_1 << endl;
    cout << "Monedas de 50 céntimos: " << monedas_50c << endl;
    cout << "Monedas de 20 céntimos: " << mowrnedas_20c << endl;
    cout << "Monedas de 10 céntimos: " << monedas_10c << endl;
    cout << "Monedas de 5 céntimos: " << monedas_5c << endl;

    return 0;
}
//SE REVISARA POR LA TARDE
