#include <stdio.h>

int main () {
    int num = 0;

    printf("Ingresa el numero:\n");
    scanf("%d", &num);
    
    int arr[10] = {0};

    int t = num;
    while (t) {
        int digit = t % 10;

        arr[digit]++;

        t /= 10;
    }

    int max = -1;
    int max_value = -1;

    for(int i = 0; i < 10; i++) {
        if (max <= arr[i]) {
            max = arr[i];
            max_value = i;
        }
    }
    
    printf("El valor que mas se repite es: %d\n", max_value);
    printf("El valor se repite la cantidad de: %d veces\n", max);

    return 0;
}