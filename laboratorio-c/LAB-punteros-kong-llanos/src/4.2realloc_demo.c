#include <stdio.h>
#include <stdlib.h>

int main() {

    int capacidad = 2;
    int elementos = 0;
    int realloc_llamados = 0;
    
    int *arreglo = (int*)calloc(capacidad, sizeof(int));
    if (arreglo == NULL) {
        fprintf(stderr, "Error al reservar memoria\n");
        return 1;
    }

    printf("Ingrese enteros (termine con -1):\n");

    int entrada;
    while (scanf("%d", &entrada) == 1 && entrada != -1) {
        
        if (elementos == capacidad) {
            int nueva_capacidad = capacidad * 2;
            
            int *tmp = (int*)realloc(arreglo, nueva_capacidad * sizeof(int));
            if (tmp == NULL) {
                fprintf(stderr, "realloc fallo\n");
                free(arreglo);
                return 1;
            }
            
            arreglo = tmp; 
            capacidad = nueva_capacidad;
            realloc_llamados++;
        }
        
        arreglo[elementos] = entrada;
        elementos++;
    }

    printf("\nElementos: %d\n", elementos);
    printf("Capacidad final: %d\n", capacidad);
    printf("realloc llamados: %d\n", realloc_llamados);
    
    printf("Contenido: ");
    for (int i = 0; i < elementos; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    free(arreglo);

    return 0;
}