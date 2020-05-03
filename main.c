#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor1, valor2, resultado;

	printf ("Ingrese un valor a sumar: ");
	scanf ("%d", &valor1);
	
	printf ("Ingrese otro valor: ");
	scanf ("%d", &valor2);
	
	resultado=valor1+valor2;
	
	printf("La suma de los valores ingresados es de %d \n ",resultado);
	system ("Pause");
	
	return 0;

}
