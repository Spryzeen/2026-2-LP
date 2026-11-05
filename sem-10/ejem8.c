#include <stdio.h>
int main() {
	FILE* archivo;
	long tamano;

	archivo = fopen("datos.txt", "r");
    
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1;
	}

	fseek(archivo, 0, SEEK_END);

	tamano = ftell(archivo);

	printf("Tamano del archivo: %ld bytes\n", tamano);

	fclose(archivo);

	return 0;
}