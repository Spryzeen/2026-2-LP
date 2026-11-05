#include <stdio.h>

int main() {
	FILE* archivo;

	archivo = fopen("estudiantes.txt", "w");

	if (archivo == NULL) {
		printf("Error al crear el archivo.\n");
		return 1;
	}

	fprintf(archivo, "001,Juan,18\n");
	fprintf(archivo, "002,Pedro,16\n");
	fprintf(archivo, "003,Maria,19\n");

	fclose(archivo);

	printf("Archivo creado correctamente.\n");

	return 0;
}