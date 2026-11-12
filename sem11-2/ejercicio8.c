#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
	int valor;
	struct nodo* izq;
	struct nodo* der;
} Nodo;

Nodo* Insertar(Nodo* nodoActual, int nuevoValor) {
	if (nodoActual == NULL) {
		nodoActual = malloc(sizeof(Nodo));
		nodoActual->valor = nuevoValor;
        nodoActual->izq = NULL;
        nodoActual->der = NULL;
		return nodoActual;
	}

	if (nuevoValor < nodoActual->valor) {
		nodoActual->izq = Insertar(nodoActual->izq, nuevoValor);
	} else {
		nodoActual->der = Insertar(nodoActual->der, nuevoValor);
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
	}
}

int main(void) {
    Nodo* arbol1 = NULL;

    Insertar(arbol1, 10);
    Insertar(arbol1, 12);
    Insertar(arbol1, 7);

    int encontrado = Buscar(arbol1, 10);

    if (encontrado == 1) {
        printf("Si esta\n");
    } else {
        printf("No esta\n");
    }

	return 0;
}