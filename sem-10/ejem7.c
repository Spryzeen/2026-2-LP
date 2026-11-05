#include <stdio.h>
int main() {
	FILE* archivo;
	char texto[100];
	archivo = fopen("mensaje.txt", "w");

	if (archivo == NULL) {
		return 1;
	}

	fputs("Programacion en lenguaje C\n", archivo);
	fputs("Gestion de archivos\n", archivo);

	fclose(archivo);

	archivo = fopen("mensaje.txt", "r");

	if (archivo == NULL) {
		return 1;
	}

	while (fgets(texto, sizeof(texto), archivo) != NULL) {
		printf("%s", texto);
	}

	fclose(archivo);
    
	return 0;
}