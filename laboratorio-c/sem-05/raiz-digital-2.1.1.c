#include <stdio.h>

int suma_de_digitos (int n);
int raiz_digital (int n);
int traza (int n);

int main (void) {
    int num = 0;

    printf("Ingresa el numero: ");
    scanf("%d", &num);

    traza(num);
    printf("La raiz es: %d", raiz_digital(num));

    return 0;
}

int suma_de_digitos (int n) {
    int suma = 0;

    while (n) {
        int digito = n % 10;
        suma += digito;
        n /= 10;
    }

    return suma;
}

int raiz_digital (int n) {
    while (9 < n) {
        n = suma_de_digitos(n);
    }

    return n;
}

int traza (int n) {
    printf("%d", n);
    while (9 < n) {
        n = suma_de_digitos(n);
        printf(" -> %d", n);
    }
    printf("\n");
}