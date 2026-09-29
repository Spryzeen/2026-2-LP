#include <stdio.h>

int main (void) {
    int num = -1;

    printf("Ingrea el numero: ");
    scanf("%d", &num);

    int t = num;
    int k = 0;

    while (t) {
        k++;
        t /= 10;
    }

    t = num;
    int suma = 0;
    while (t) {
        int cifra = t % 10;

        int cifra_potencia = 1;
        for(int i = 0; i < k; i++) {
            cifra_potencia *= cifra;
        }

        suma += cifra_potencia;
        t/=10;
    }

    if(suma == num) {
        printf("Es un numero de Armstrong!");
    } else {
        printf("No es un numero de Armstrong!");
    }

    return 0;
}