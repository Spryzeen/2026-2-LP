#include <stdio.h>

#define BUFF_SIZE 128

int main(void) {
	char linea[BUFF_SIZE];

	FILE* out_file;

	out_file = fopen("datos2.txt", "w");
	if (out_file == NULL) {
		fprintf(stderr, "Fallo al acceder al archivo out_file");
		return 1;
	}

	for (int i = 0; i < 10; i++) {
		fgets(linea, BUFF_SIZE, stdin);
		fprintf(out_file, linea);
	}

    fclose(out_file);

	return 0;
}