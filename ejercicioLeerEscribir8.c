  
/*
	Completando palabras
	Permitir al usuario ingresar los caracteres faltantes para la palabra:
		Paralelepipedo
	El mensaje que se mostrara sera de esta forma: Pa_alel_pipe_o
	Una vez que el usuario ingrese los caracteres que suponen completar la palabra debera mostrarse el resultado
*/

#include <stdio.h>

int main()
{
	
	char caracter1 = '_';
	char caracter2 = '_';
	char caracter3 = '_';

	printf("Ingrese los caracteres faltantes de la sigueinte palabra: Paralelepipedo\n");
	printf("Pa_alel_pipe_o\n");
	printf("Ingrese primer caracter faltante\n");
	scanf(" %c", &caracter1);
	printf("Ingrese segundo caracter faltante\n");
	scanf(" %c", &caracter2);
	printf("Ingrese tercer caracter faltante\n");
	scanf( " %c", &caracter3);

	//printf("caracter1 %c, caracter2 %c, caracter3 %c", caracter1, caracter2, caracter3);

	printf("La palabra formada es: Pa%calel%cpipe%co", caracter1, caracter2, caracter3);

	return 0;
}