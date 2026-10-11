#include <stdio.h>

int contador = 0;

void incrementar_global (void) {
    contador++;
}

int main (void) {
    incrementar_global();
    incrementar_global();
    incrementar_global();
    printf("global contador: %d\n", contador);
    return 0;
}

