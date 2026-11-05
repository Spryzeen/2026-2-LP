#include <stdio.h>
int main() {
	FILE* archivo;
	char linea[100];

	archivo = fopen("datos.txt", "r+");

	if (archivo == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1;
	}
	printf("Contenido original:\n");

	while (fgets(linea, sizeof(linea), archivo) != NULL) {
		printf("%s", linea);
	}

	// Posicionarse al final fseek(archivo, 0, SEEK_END);
	// Escribir nuevos registros fprintf(archivo, "Carlos\n");
    
	fprintf(archivo, "Ana\n");

	fclose(archivo);

	return 0;
}