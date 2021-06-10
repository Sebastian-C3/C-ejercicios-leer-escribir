#include <stdio.h>

const int ANIOS_TIERRA = 7;

int main(){

	int horasPlaneta = 0;

	printf("Ingrese la candidad de horas que estuvo en el planeta de Miller \n");
	scanf("%i", &horasPlaneta);

	printf("Han pasado %i anios en la Tierra Copper\n", ANIOS_TIERRA * horasPlaneta);

	return 0;

}