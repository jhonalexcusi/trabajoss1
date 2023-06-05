#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, h;

    cout << "Introduce la longitud del primer cateto (a): ";
    cin >> a;

    cout << "Introduce la longitud del segundo cateto (b): ";
    cin >> b;

    h = sqrt(pow(a, 2) + pow(b, 2));

    cout << "La hipotenusa es: " << h << endl;

    return 0;
}
