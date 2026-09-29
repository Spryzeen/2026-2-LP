#include <stdio.h>

int main (void) {
    int num = 0;
    printf("Ingrea el numero: ");
    scanf("%d", &num);

    int t = num;
    int cifra_mayor = -1;
    int cifra_menor = 10;

    while (t) {
        int cifra = t % 10;

        if (cifra_mayor < cifra) {
            cifra_mayor = cifra;
        }

        if (cifra_menor > cifra) {
            cifra_menor = cifra;
        }

        t /= 10;
    }

    printf("Mayor cifra: %d\n", cifra_mayor);
    printf("Menor cifra: %d\n", cifra_menor);

    return 0;
}