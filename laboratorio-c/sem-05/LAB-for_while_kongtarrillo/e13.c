#include <stdio.h>

int main (void) {
    double suma = 0;
    double tolerancia = 0;

    printf("Ingresa un valor de tolerancia: ");
    scanf("%lf", &tolerancia);

    int i = 0;

    while (1) {
        double termino = (float) 1 / (i + 1);

        if ((i+1) % 2 == 0) {
            termino *= -1;
        }

        suma += termino;

        i++;

        if (termino < 0) {
            termino *= -1.0f;
        }

        if (termino < tolerancia) {
            printf("STOP %lf %lf\n", termino, tolerancia);
            break;
        }
    }

    printf("Tolerancia: %lf\n", tolerancia);
    printf("Iteraciones: %d (Approx.)\n", i);
    printf("Suma calculada: %lf\n", suma);
    printf("ln(2) esperado: 0.693174\n");
    printf("Error absoluto: %lf", 0.693174 - suma);

    return 0;
}
