#include <stdio.h>
#include <stdlib.h>

#define MAX_FIL 3
#define MAX_COL 3

void init_matrix(int **matrix);
void show_matrix(int **matrix);

int main(void) {
	int matrix[MAX_FIL][MAX_COL];

    init_matrix(matrix);
    printf("\n");
    show_matrix(matrix);

	return 0;
}

void init_matrix(int **matrix){
	for (int i = 0; i < MAX_FIL; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			matrix[i][j] = 0;
		}
	}

    printf("Matrix inicializada!\n");
}

void show_matrix(int **matrix) {
    for (int i = 0; i < MAX_FIL; i++ ) {
        for (int j = 0; j < MAX_COL; j ++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix mostrada!\n");
}