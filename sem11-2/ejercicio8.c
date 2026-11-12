#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
	int valor;
	struct nodo* izq;
	struct nodo* der;
} Nodo;

Nodo* Insertar(Nodo** nodoActual, int nuevoValor) {
	if (*nodoActual == NULL) {
		*nodoActual = malloc(sizeof(Nodo));
		
        (*nodoActual)->valor = nuevoValor;
        (*nodoActual)->izq = NULL;
        (*nodoActual)->der = NULL;

        printf("Se anadio: %d\n", nuevoValor);
		return *nodoActual;
	}

	if (nuevoValor < (*nodoActual)->valor) {
		(*nodoActual)->izq = Insertar(&(*nodoActual)->izq, nuevoValor);
	} else {
		(*nodoActual)->der = Insertar(&(*nodoActual)->der, nuevoValor);
	}
}
 
int Buscar(Nodo* nodoActual, int valorBuscado) {
	if (nodoActual == NULL) {
		return 0;
	}

	if (valorBuscado == nodoActual->valor) {
		return 1;
	}

	if (valorBuscado < nodoActual->valor) {
		return Buscar(nodoActual->izq, valorBuscado);
	} else {
        return Buscar(nodoActual->der, valorBuscado);
    }
} 

int main(void) {
    Nodo* arbol1 = NULL;

    Insertar(&arbol1, 10);
    Insertar(&arbol1, 12);
    Insertar(&arbol1, 7);
/* 
    printf("root: %d\n", arbol1->valor);
    printf("left: %d\n", arbol1->izq->valor);
    printf("der: %d\n", arbol1->der->valor); */

    int encontrado = Buscar(arbol1, 15);

    if (encontrado == 1) {
        printf("15 si esta\n");
    } else {
        printf("15 no esta\n");
    } 

    encontrado = Buscar(arbol1, 12);

    if (encontrado == 1) {
        printf("12 si esta\n");
    } else {
        printf("12 no esta\n");
    } 

	return 0;
}