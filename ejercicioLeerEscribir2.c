#include <stdio.h>

int main()
{
	
	char nombreUsuario[35] = "def_usuario";
	char emailUsuario[35] = "def_mail";

	printf("Ingrese su nombre completo\n");
	scanf(" %s", &nombreUsuario);

	printf("Ingrese su email\n");
	scanf(" %s", &emailUsuario);

	printf("%s \n", nombreUsuario);

	printf("Email del usuario %s : %s", nombreUsuario, emailUsuario);
	return 0;
}