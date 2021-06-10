/*
	ej 6 escribir - leer
	
	Adoptando gatitos
	Simular la adopcion de gatitos permitiendo elegir al usuario la cantidad a adoptar informando lo necesario
	variables:
		- cantGatitos
*/

#include <stdio.h>

int main()
{
	
	int CantGatitos = 0;

	printf("Ingrese cuantos gatitos desea adoptar\n");
	scanf("%i", &CantGatitos);

	printf("Va a adoptar %i gatitos", CantGatitos);


	return 0;
}