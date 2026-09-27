#include <stdio.h>

int main (void) {
    int sum = 0;
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            printf("i: %i, j: %i ", i ,j);

            if (i*j > 6) {
                printf("- break\n");
                break;
            } 
            if (i == j) {
                printf("- continue\n");
                continue;
            } 
            sum += i* j;
            printf("new sum = %i\n", sum);
        }
    }

    return 0;
}