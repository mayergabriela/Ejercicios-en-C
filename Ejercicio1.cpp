#include <stdlib.h>
#include <stdio.h>

int main ()
{
int ch, vh, sdo;
	printf ("Ingrese la cantidad de horas trabajadas");
	scanf ("%d",&ch);
		printf ("Ingrese el valor de la hora");
	scanf ("%d",&vh);
	sdo=ch*vh;
	printf("El sueldo es de %d",sdo);
	system ("pause");
	return 0;
}

