//#include <stdio.h>
//#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {

//	int valor1, valor2, valor3, resultado;
		
//	printf("Ingrese un valor:");
//	scanf("%d, &valor1");
	
//	printf("Ingrese un segundo valor:");
//	scanf("%d, &valor2");
	
//	printf("Ingrese un tercer valor a sumar:");
//	scanf("%d, &valor3");
	
//	resultado= valor1 + valor2 + valor3;
	
//	printf("El resuldado de la sumatoria es de %d \n", resultado);
	
//	system("pause");
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2, valor3, resultado;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    printf("Ingrese el tercer valor: ");
    scanf("%d", &valor3);

    resultado = valor1 + valor2 + valor3;

    printf("La suma es: %d \n", resultado);

	system("pause");
	
    return 0; 
}
