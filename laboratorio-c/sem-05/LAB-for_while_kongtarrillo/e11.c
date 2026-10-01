#include <stdio.h>

int main (void) {
    int num = 0;

    printf("Ingresa n: ");
    scanf("%d", &num);

    int raiz = num;
    int flag = 1;

    while (9 < raiz) {

        int t = raiz;
        int suma = 0;

        while(t) {
            int cifra = t % 10;
            suma += cifra;
            t /= 10;
        }

        if (flag) {
            printf("%d", raiz);
            flag = 0;
        } else {
            printf(" -> %d", suma);
        }
        
        raiz = suma;
    }

    printf("\nRaiz digital: %d", raiz);

    return 0;
}