#include <stdio.h>

int main (void) {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("%-10s = %d, &x = %p\n", "x", x, (void*) &x);
    printf("%-10s = %p, &p = %p\n", "p", (void*) p, (void*) &p);
    printf("%-10s = %p, &pp = %p\n", "pp", (void*) pp, (void*) &pp);

    printf("\n");
    
    // modificacion de x por p
    printf("x = %d\n", x);
    *p = 100;
    printf("x = %d\n", x);
    **pp = 200;
    printf("x = %d\n", x);

    return 0;
}