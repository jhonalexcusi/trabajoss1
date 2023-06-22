¿Cuál es la salida de este bucle?
int i = 1 ;
while (i * i < 10)
{
int j = i;
while (j * j < 100)
{
cout << i + j << " ";
j *= 2;
}
i++;
cout << endl;
}
cout << "\n*****\n";
La salida de este bucle sería la siguiente:  2 3 4 5 3 4 5 6 4 5 6 7

Este bucle consiste en un bucle while anidado dentro de otro. El primer bucle exterior se ejecutará mientras que el cuadrado de la 
variable i sea menor que 10. Dentro de este bucle exterior, se encuentra un segundo bucle anidado que se ejecutará mientras que el 
cuadrado de la variable j sea menor que 100.

En cada iteración del bucle interior, se imprime la suma de i y j utilizando cout. Después de cada iteración del bucle interior, 
el valor de j se multiplica por 2.

Una vez que el bucle interior se completa, el valor de i se incrementa en 1 y se imprime un salto de línea utilizando endl. 
Este proceso se repite hasta que la condición del bucle exterior (i * i <10) ya no se cumpla.

Una vez completados los bucles, se imprime la cadena "*****" utilizando cout.