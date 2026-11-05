#include <stdio.h>
#include <stdlib.h>

#define MAX_FIL 3
#define MAX_COL 3

void imprimir_matrix(int** matrix);

int main(void) {
	int** matrix = (int**)calloc(MAX_FIL, sizeof(int*));

	if (!matrix) {
		return 1;
	}

	for (int i = 0; i < MAX_FIL; i++) {
		matrix[i] = (int*)calloc(MAX_COL, sizeof(int));
	}

    printf("Matrix antes: \n");
    imprimir_matrix(matrix);

    for(int i = 0; i < MAX_FIL; i ++) {
        for(int j = 0; j < MAX_COL; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Matrix despues: \n");
    imprimir_matrix(matrix);

	return 0;
}

void imprimir_matrix(int** matrix) {
	for (int i = 0; i < MAX_FIL; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}