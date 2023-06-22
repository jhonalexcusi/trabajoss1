¿Cuál es la salida de los siguientes bucles?
a) for (int n = 10; n > 0; n = n – 2)
{
cout << "Hola ";
cout << n << endl ;
}
b) for (double n = 2; n > 0; n = n - 0.5)
cout << m << " ";


a) El primer bucle es un bucle for que comienza en 10, itera mientras n es mayor que 0, y decrementa n en 2 en cada iteración. 
Al final de cada iteración, el bucle imprime "Hola" seguido del valor actual de n y un salto de línea. La salida del bucle sería:

Hola 10 Hola 8 Hola 6 Hola 4 Hola 2

b) El segundo bucle es un bucle for que comienza en 2, itera mientras n sea mayor que 0, y decrementa n en 0.5 en cada iteración. 
Al final de cada iteración, el bucle imprime el valor actual de m (que nunca se define en el bucle) seguido de un espacio. 
Este código generaría un error de compilación ya que el identificador "m" no se ha definido.