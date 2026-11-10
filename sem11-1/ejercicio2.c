#include <stdio.h>  
#include <string.h>

struct Alumno {
    int codigo;
    char nombre[20];
    int edad;
};
void mostrar(struct Alumno a){
    printf("Codigo: %d\n", a.codigo);
    printf("Nombre: %s\n", a.nombre);
    printf("Edad: %d\n\n", a.edad);
}
int main () {

    struct Alumno a1;
    struct Alumno a2[5];
    struct Alumno a3 = {1250, "Abel", 18};
    struct Alumno a4 = {.edad = 22, .codigo = 999};
    
    a1.codigo = 123;
    strcpy(a1.nombre, "Jhonny");
    a1.edad = 25;

    mostrar(a1);

    mostrar(a3);

    mostrar(a4);

    for(int i = 0; i<5; i++){
        a2[i].codigo = 100 + i;
        a2[i].edad = 1 + i;
    }
    
    printf("Mostrar el arreglo: \n");
    for (int i = 0; i<5; i++){
    
    mostrar(a2[i]);
    
    }
    return 0;
}