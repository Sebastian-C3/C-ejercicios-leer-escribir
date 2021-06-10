#include <stdio.h>

const int CANT_ESTUDIANTES = 15;

int main()
{

	int alumnosAusentes = 0;
	
	printf("Ingrese cuantos alumnos estan ausentes\n");
	scanf("%i", &alumnosAusentes);

	printf("Hoy se durmieron %i estudiantes de %i totales\n", alumnosAusentes, CANT_ESTUDIANTES);
	printf("Alumnos presentes: %i", CANT_ESTUDIANTES - alumnosAusentes);

	return 0;
}