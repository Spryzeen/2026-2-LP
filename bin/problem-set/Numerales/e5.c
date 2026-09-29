#include <stdio.h>

int main (void) {
    int num = 0;
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    int t = num;
    int inverse = 0;

    while (t) {
        int digit = t % 10;
        inverse = inverse * 10 + digit;
        t /= 10;
    }

    printf("El numero original: %d\n", num);
    printf("El inverso: %d\n", inverse);
    
    if (inverse == num) {
        printf("El numero es capicua");
    } else {
        printf("El numero no es capicua");
    }
}