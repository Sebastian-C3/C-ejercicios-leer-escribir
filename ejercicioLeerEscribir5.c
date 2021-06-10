#include <stdio.h>

const int DIVISOR_BIT = 8;

int main()
{
	float velContratada = 0;

	printf("Ingrese velocidad contratada en megas\n");
	scanf("%f", &velContratada);

	printf("El usuario compro un paquete de %.0f megas, y la velocidad relevante en realidad es de %.1fMB/s", velContratada, velContratada / DIVISOR_BIT);

	return 0;
}