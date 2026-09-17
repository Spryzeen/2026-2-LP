#include <stdio.h>

int main (void) {
    printf("C version: %ld\n", __STDC_VERSION__);
    printf("Int: %zu bytes\n", sizeof(int));
    printf("Long: %zu bytes\n", sizeof(long long));
    printf("Float: %zu bytes\n", sizeof(float));
    printf("Double: %zu bytes\n", sizeof(double));
    
    return 0;
}