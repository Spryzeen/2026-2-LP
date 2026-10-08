#include <stdio.h>

#define SIZE 10

int main(void) {
	int arr[SIZE] = {0};

	// input

	printf("Ingresa 10 enteros\n");

	for (int i = 0; i < SIZE; i++) {
		scanf("%d", *(arr + i));
	}

	// max, min, suma, pares e impares
	int max = arr[0];
    int max_index = 0;
	int min = arr[0];
    int min_index = 0;

	int pares = 0;
	int impares = 0;

	int suma = 0;

	for (int i = 0; i < SIZE; i++) {
		int x = arr[i];

		if (x < min) {
			min = x;
            min_index = i;
		}

		if (max < x) {
			max = x;
            max_index = i;
		}

		if (x % 2 == 0 || x == 0) { // por alguna razon 0 % 2 no es 0?
			pares++;
		} else {
			impares++;
		}

		suma += x;
	}

	float promedio = (float) suma / SIZE;

	printf("%-10s : %d\n", "Suma", suma);
	printf("%-10s : %.2f\n", "Promedio", promedio);
	printf("%-10s : %d (Indice %d)\n", "Minimo", min, min_index);
	printf("%-10s : %d (Indice %d)\n", "Maximo", max, max_index);
	printf("%-10s : %d\n", "Pares", pares);
	printf("%-10s : %d\n", "Impares", impares);

	// Bloque de iteracion

	printf("%-10s : ", "Original");

	for (int i = 0; i < SIZE; i++) {
		if (i == 0) {
            printf("%d", arr[i]);
		} else {
			printf(", %d", arr[i]);
		}
	}
	printf("\n");

	// Inversion

	for (int i = 0; i < SIZE / 2; i++) {
		int t = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = t;
	}

	printf("%-10s : ", "Original");

	for (int i = 0; i < SIZE; i++) {
		if (i == 0) {
            printf("%d", arr[i]);
		} else {
			printf(", %d", arr[i]);
		}
	}
	printf("\n");

	return 0;
}