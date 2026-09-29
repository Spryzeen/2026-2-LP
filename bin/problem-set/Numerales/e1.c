#include <stdio.h>
int main () {
    int n;
    printf("Ingresa el numero: ");
    scanf("%d", &n);

    int t = n;
    int inverse = 0;
    while (t) {
        int digit = t % 10;
        inverse = inverse * 10 + digit;
        t/=10;
    }

    printf("Numero original: %d\n", n);
    printf("Numero inverso: %d", inverse);


    printf("\n\nC");
    return 0;
}