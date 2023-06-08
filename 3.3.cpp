#include <iostream>
using namespace std;

int main() {
    float a, b, c, d, e, f;

    cout << "Ingrese los coeficientes a, b, c, d, e y f de la siguiente manera: ax + by = c, y\n";
    cout << "cx + dy = f\n";
    cin >> a >> b >> c >> d >> e >> f;

    float det = a*d - b*c;  // calculamos la determinante del sistema

    if (det == 0) {
        cout << "El sistema no tiene solución única." << endl;
    } else {
        float x = (d*e - b*f) / det;  // calculamos la solución para x
        float y = (a*f - c*e) / det;  // calculamos la solución para y
        
        cout << "x = " << x << ", y = " << y << endl;  // mostramos la solución del sistema
    }

    return 0;
}
// MODIFICAR EL EJERCICIO PARA EL CASO QUE SI EL RESULTADO DE "X" ES MAYOR QUE 2, EL RESULTADO DE "Y", DEBERA SER ELEVADO AL CUADRADO, CASO CONTRARIO SE LE RESTARA 2
