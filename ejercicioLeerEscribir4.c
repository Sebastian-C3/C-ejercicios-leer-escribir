#include <stdio.h>

#define CANT_MESES 12

int main()
{
	int cantMascotas = 0;
	int pesoAlimento = 0;
	int cantBolsas = 0;
	float precioAlimento = 0;
	char marcaAlimento [20] = "def_marca_alimento";

	printf("Ingrese la marca del alimento\n");
	scanf(" %s", &marcaAlimento);
	printf("Ingrese el peso de la bolsa de alimento\n");
	scanf("%i", &pesoAlimento);
	printf("Ingrese el precio de la bolsa de alimento\n");
	scanf("%f", &precioAlimento);
	printf("Ingrese cantidad de bolsas consumidas en el mes\n");
	scanf("%i", &cantBolsas);
	printf("Ingrese cantidad de mascotas\n");
	scanf("%i", &cantMascotas);

	printf("Con %i bolsas de %iKg marca %s para %i mascotas se gasta en un anio $%.2f", cantBolsas, pesoAlimento, marcaAlimento, cantMascotas, cantBolsas * precioAlimento * CANT_MESES);

	return 0;
}