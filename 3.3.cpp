#include <iostream>
#include <cmath>
using namespace std;

int main() {
   float a, b, c, d, e, f;
   float D, Dx, Dy, x, y; 
   
   cout << "Ingrese los coeficientes a, b, c, d, e, y f: ";
   cin >> a >> b >> c >> d >> e >> f;
   
   D = a * d - b * c;
   Dx = e * d - b * f;
   Dy = a * f - e * c;
   
   x = Dx / D;
   y = Dy / D;
   
   if (x > 2) {
      y = pow(y, 2);
   } else {
      y -= 2;
   }
   
   cout << "La solución para x es: " << x << endl;
   cout << "La solución para y es: " << y << endl;
   
   return 0;
}
