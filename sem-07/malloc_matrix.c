#include <stdio.h>
#include <stdlib.h>

#define MAX_FIL 3
#define MAX_COL 4

int main (void) {
    int **matrix = (int**) malloc(sizeof(int*) * MAX_FIL);

    for(int i = 0; i < MAX_FIL; i++) {
        matrix[i] = (int*) malloc(sizeof(int) * MAX_COL);
    }

    for(int i = 0; i < MAX_FIL; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            matrix[i][j] = (i + 1) + (j + 1);
        }
    }

    for(int i = 0; i < MAX_FIL; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}