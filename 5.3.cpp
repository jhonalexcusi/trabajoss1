Considerar el siguiente código de programa.
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
a) ¿Cuál es la salida si se introduce como valor de n, 0? Si se introduce 0 como valor de n, 
el programa entra en un bucle infinito ya que la condición del while (i <= n) es verdadera siempre 
(1 es siempre menor o igual que 0). Por lo tanto, no se produce ninguna salida.

b) ¿Cuál es la salida si se introduce como valor de n, 1? Si se introduce 1 como valor de n, el programa entra en el bucle while 
pero no se cumple la condición del if ((i % n) == 0) ya que cualquier número módulo 1 es igual a 0, por lo que el programa sigue 
incrementando i hasta que i = 2. En ese momento, la condición del if se cumple y se incrementa i de nuevo, 
dejando un valor final de i = 3. Por lo tanto, la salida del programa sería 3.

c) ¿Cuál es la salida si se introduce como valor de n, 3? Si se introduce 3 como valor de n, 
el programa entra en el bucle while y comienza a incrementar i en cada iteración. En la primera iteración, i es igual a 1 y no se 
cumple la condición del if ((i % n) == 0), por lo que se incrementa i a 2. En la segunda iteración, i es igual a 2 y tampoco se 
cumple la condición del if, por lo que se incrementa i a 3. En la tercera iteración, i es igual a 3 y se cumple la condición del 
if ((i % n) == 0) ya que 3 es divisible por 3, por lo que se incrementa i a 4 y se sale del bucle while. La salida del programa sería 4.