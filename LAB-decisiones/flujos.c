#include <stdio.h>

int main (void) {
    fprintf(stdout, "Mensaje en el flujo normal");
    fprintf(stderr, "Mensaje en el flujo de error");

    return 0;
}