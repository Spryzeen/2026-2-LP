#include <stdio.h>

int main (void) {
    int num = 0;
    int shift = 0;

    printf("Ingresa el numero: ");
    scanf("%d", &num);

    printf("Ingresa la cantidad de shift: ");
    scanf("%d", &shift);

    int pow10 = 1;
    while (pow10 <= num / 10) {
        pow10 *= 10;
    }

    int new_num = num;
    int cifra = -1;

    for(int i = 0; i < shift; i++) {
        cifra = new_num % 10;
        new_num /= 10;
        new_num += cifra * pow10;
    }

    printf("Numero original: %d\n", num);
    printf("Numero modificado: %d\n", new_num);

    return 0;
}