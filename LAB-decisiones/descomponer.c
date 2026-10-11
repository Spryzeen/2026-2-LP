#include <stdio.h>

int main (void) {
    int x = 654321;

    int pow10 = 1;
    int index = 0; // Incialización

    printf("Ingrese la cifra que desea (De der a izq):\n");
    scanf("%i", &index);

    for(int i = 1; i < index; i++) pow10 *= 10;
    int cipher = (x/pow10) % 10;

    printf("Primera Cifra: %i", cipher);

    return 0;
}