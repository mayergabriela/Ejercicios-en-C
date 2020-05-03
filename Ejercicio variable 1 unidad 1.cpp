#include <iostream> 										
#include <stdlib.h>
#include <stdio.h>

int main ()

{
int valor1, valor2, resultado;

printf ("Ingrese un valor a sumar");
scanf ("%d", &valor1);

printf ("Ingrese otro valor");
scanf ("%d", &valor2);

resultado=valor1+valor2;

printf("La suma de los valores ingresados es de %d \n",resultado);
system ("Pause");

return 0;
}
