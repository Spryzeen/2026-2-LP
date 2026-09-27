#include <stdio.h>

int main () {
    int num = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    int new_num = 0;
    int t = num, pow10 = 1;

    while(t) {
        int digito = t % 10;
        
        if (digito % 2 != 0) {
            new_num += digito * pow10;
            pow10*=10;
        }

        t /= 10;
    }

    printf("Numero original: %d\n", num);
    printf("Numero modificado: %d\n", new_num);
    printf("\nC");

    return 0;
}