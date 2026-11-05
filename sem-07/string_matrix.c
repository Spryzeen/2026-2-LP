#include <stdio.h>

#define MAX_FIL 3
#define MAX_COL 3

int main (void) {
    char*** matrix = (char***) malloc(sizeof(char**) * MAX_FIL);

    if (!matrix) {
        return 1;
    }
    
    for(int i = 0; i < MAX_FIL; i++) {
        matrix[i] = (char**) malloc( sizeof(char* ) * MAX_COL);
    }

    for(int i = 0; i < MAX_FIL; i++) {
        for(int j = 0; j < MAX_COL; j++) {

        }
    }

    return 0;
}