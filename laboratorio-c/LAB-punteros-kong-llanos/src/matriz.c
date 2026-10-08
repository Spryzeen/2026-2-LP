#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main(void) {
	int arr[FILAS][COLUMNAS] = {0};
    int traspuesta[COLUMNAS][FILAS] = {0};
    int suma_columas[COLUMNAS] = {0};

    // input
	for (int i = 0; i < FILAS; i++) {
		printf("Ingresa los datos de la columna %d:\n", i + 1);
		for (int j = 0; j < COLUMNAS; j++) {
            int t = arr[i][j];
			scanf("%d", &t);

            // traspuesta
            arr[j][i] = t;
		}
	}

    int suma_total = 0;

    // impresion y suma de filas
	for (int i = 0; i < FILAS; i++) {
		int suma = 0;

		for (int j = 0; j < COLUMNAS; j++) {
            int t = arr[i][j];
            suma += t;

            suma_columas[i] += t;

			printf("%4d", t);
		}

        suma_total += suma;

		printf(" | suma fila = %d\n", suma);
	}

    printf("-------------------------\n");
    printf("%4d %4d %4d %4d (Suma de columnas)\n\n");
    printf("Suma total: %d\n", suma_total);

    // Impresion de la traspuesta
    printf("Transpuesta %dx%d\n", FILAS, COLUMNAS);
    for(int i = 0; i < COLUMNAS; i++) {
        for(int j = 0; i < FILAS; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    int k = 0;
    printf("Ingrese el escalar: ");
    scanf("%d", &k);

    // recorridos
    printf("Recorrido forward: ");
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            printf("%d ", arr[i][j] * k);
        }
    }

    printf("\n");
    
    printf("Recorrido reverse: ");
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            printf("%d ", arr[FILAS - 1 - i][COLUMNAS - 1 - j] * k);
        }
    }

    printf("\n");

	return 0;
}