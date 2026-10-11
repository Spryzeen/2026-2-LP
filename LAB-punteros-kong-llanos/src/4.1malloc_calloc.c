#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    int *arr_malloc = (int*)malloc(n * sizeof(int));
    int *arr_calloc = (int*)calloc(n, sizeof(int));

    if (arr_malloc == NULL || arr_calloc == NULL) {
        fprintf(stderr, "Error al reservar memoria.\n");
        return 0;
    }

  
    printf("malloc(10) antes de inicializar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_malloc[i]); 
    }
    printf("\n");

    printf("calloc(10) antes de inicializar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]); 
    }
    printf("\n");

    
    for (int i = 0; i < n; i++) {
        arr_malloc[i] = i * i;
        arr_calloc[i] = i * i;
    }

    printf("Tras llenar con cuadrados:\n");
    printf("malloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n");

    printf("calloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n\n");

    free(arr_malloc);
    free(arr_calloc);

    int ptr_var = (int*)malloc(0);
    printf("Variante malloc(0):\n");
    if ptr_var == NULL) {
        printf("malloc(0) devolvió NULL.\n");
    } else {
        printf("malloc(0) devolvió un puntero con direccion: %p).\n",ptr_var);
        free(ptr_var); 
    }

    return 0;
}
