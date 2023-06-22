Suponiendo que m = 3 y n = 5 ¿Cuál es la salida de los siguientes segmentos de programa?
a) for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
cout << “ * ”;
cout << endl;
}

b) for (int i = n; i > 0; i--)
{
for (int j = m; j > 0; j--)
cout << “ * ”;
cout << endl;
}
a) Este segmento de código utiliza dos bucles for anidados para imprimir una serie de "" que forma un patrón de triángulo en la 
consola. En el primer bucle, la variable "i" se incrementa de 0 a "n-1" (donde n = 5 en este caso). En cada iteración, el segundo 
bucle se ejecuta "i" veces, imprimiendo "i" "" seguidos de un espacio en blanco. Después de imprimir la línea completa, 
se agrega una nueva línea para comenzar una nueva fila.
Aquí está la salida que se generará:

* 
* * 
* * * 
* * * * 
* * * * *

b) Este segmento de código también utiliza dos bucles for anidados para imprimir una serie de "" que forma un patrón en la consola. 
En el primer bucle, la variable "i" se decrementa de "n" a 1 (donde n = 5 en este caso). En cada iteración, el segundo bucle se 
ejecuta "m" veces (donde m = 3 en este caso), imprimiendo "m" "" seguidos de un espacio en blanco. Después de imprimir la línea completa,
se agrega una nueva línea para comenzar una nueva fila.
Aquí está la salida que se generará:

* * * 
* * * 
* * *