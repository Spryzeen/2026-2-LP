#include <stdio.h>

int main () {
    int num = 0;
    printf("Ingresa un valor: ");
    scanf("%d", &num);

    int sum_pares = 0, sum_impares = 0;

    int t = num;
    while (t) {
        int digito = t % 10;

        if (digito % 2 == 0) {
            sum_pares += digito;
        } else {
            sum_impares += digito;
        }

        t /= 10;
    }

    printf("Cantidad de pares: %d\n", sum_pares);
    printf("Cantidad de impares: %d\n", sum_impares);
    printf("Diferencia: %d", sum_pares - sum_impares);

    printf("\n\nC");

    return 0;
}