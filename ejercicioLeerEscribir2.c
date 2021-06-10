#include <stdio.h>

int main()
{
	
	char nombreUsuario[35] = "def_usuario";
	char emailUsuario[35] = "def_mail";

	printf("Ingrese su nombre completo\n");
	scanf(" %[^\n]", &nombreUsuario);

	printf("Ingrese su email\n");
	scanf(" %[^\n]", &emailUsuario);

	// %[^\n] -- ^ indica tomar todos los caracteres hasta detectar un \n (salto de linea)

	printf("Email del usuario %s : %s", nombreUsuario, emailUsuario);
	return 0;
}