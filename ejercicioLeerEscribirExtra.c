#include <stdio.h>
#include <math.h>

int main()
{
	float catetoA = 0;
	float catetoB = 0;
	float hipotenusa = 0;

	printf("Ingrese cateto A\n");
	scanf("%f", &catetoA);
	printf("Ingrese cateto B\n");
	scanf("%f", &catetoB);

	printf("Hipotenusa = %.2f", sqrt(pow(catetoA,2)+pow(catetoB,2)));

	return 0;
}