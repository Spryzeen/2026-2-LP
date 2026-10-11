#include <stdio.h>

#define MAX_ESTUDIANTES 5

int main () {
    char nombre[50];
    float nota1, nota2, nota3, nota4, promedio;
    int i;

    printf("----Sistema de Calificaciones----\n");

    for (i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("\n----Estudiante %d----\n", i+1);

        while (getchar() != '\n'); // Limpiar buffer

        // Input
        printf("Nombre: ");
        fgets(nombre, sizeof(nombre), stdin);

        // Eliminar el '\n' del final
        for (int j = 0; nombre[j] != '\0'; j++) {
            if (nombre[j] == '\n') {
                nombre[j] = '\0';
                break;
            }
        }

        do {
            printf("Nota PC1 (0-20): ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 20);
        

        do {
            printf("Nota PC2 (0-20): ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 20);
        

        do {
            printf("Nota PC3 (0-20): ");
            scanf("%f", &nota3);
        } while (nota3 < 0 || nota3 > 20);

        do {
            printf("Nota PC4 (0-20): ");
            scanf("%f", &nota4);
        } while (nota4 < 0 || nota4 > 20);

        promedio = (nota1 + nota2 + nota3 + nota4) / 4;

        char* estado; // What?
        if (promedio >= 10) {
            estado = "APROBADO";
        } else if (promedio >= 6) {
            estado = "VE A SUSTI";
        } else {
            estado = "JALASTE KCHIMBO";
        }

        printf("\n----Resultados----\n");
        printf("%-12s %s\n", "Estudiante:" ,nombre);
        printf("%-12s %.2f , %.2f , %.2f , %.2f\n", "Notas:" , nota1, nota2, nota3, nota4);
        printf("%-12s %.2f\n", "Promedio:" , promedio);
        printf("%-12s %s\n", "Estado:", estado);
        printf("\n----Procesamiento Completo!----");

        return 0;

    }
}