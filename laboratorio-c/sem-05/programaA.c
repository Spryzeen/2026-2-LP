#include "stdio.h"

int contador = 0;

void incrementar_global (void) {
    int contador = 0;
    contador++;
    printf("local contador: %d\n", contador);
}

int main (void) {
    incrementar_global();
    incrementar_global();
    incrementar_global();
    printf("global contador: %d\n", contador);
    return 0;
}