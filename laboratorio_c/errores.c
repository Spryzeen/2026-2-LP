#include <stdio.h>
#include <stdlib.h>

int main() {
	int contador = 10;
	printf("Contador: %d\n", contador);

    // Verificar division por cero
	int a = 10, b = 0;
	if (b != 0) {
		float division = (float) a / b;
		printf("Division: %.3f\n", division);
	} else {
        printf("División por cero\n");
    }

    // Usar fgets en lugar de scanf para prevenir overflow
	char nombre[10];
	printf("Ingrese su nombre: ");
	fgets(nombre, sizeof(nombre), stdin);
    printf("Nombre: %s", nombre);

	float precio = 19.99;
	printf("Precio: %f\n", precio);

	return 0;

	//int variable_no_usada = 42;

	// gcc -Wall -Wextra -pedantic errores.c -o errores.exe
	// gcc -Wall -Werror errores.c -o errores.exe
	// gcc -Wall -fsanitize=address errores.c -o errores_sanitize.exe
}