  
/*
	Preparar taza de té
	Para preparar una taza de té necesitamos:
		1 saquito de té
		3 cucharadas de azucar
		500 ml de agua
	Permitir al usuario elegir cuantas tazas de té desea preparar y finalmente mostrarle que cantidades necesita de ingredientes
*/

#include <stdio.h>

const int SAQUITO_TE = 1;
const int CUCHARADA_AZUCAR = 3;
const int CANT_AGUA = 500;

int main()
{
	
	int cantTasas = 0;

	printf("Ingrese cuantas tasas de te desea preparar\n");
	scanf("%i", &cantTasas);

	printf("Para preparar %i tasas necesita los siguientes ingredientes: \n", cantTasas);
	printf("Saquitos de te: %i \n", cantTasas*SAQUITO_TE);
	printf("Azucar: %i cucharadas \n", cantTasas*CUCHARADA_AZUCAR);
	printf("Agua: %iml", cantTasas*CANT_AGUA);

	return 0;
}