#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valor;
    struct nodo *next;
};

int main (void) {
    struct nodo* lista = NULL;
    struct nodo* head = NULL;
    struct nodo* aux = NULL;

    lista = malloc(sizeof(struct nodo));

    if (lista != NULL) {
        lista->valor = 10;
        lista->next = NULL;
    } else {
        printf("NO hay memoria");
        return 0;
    }

    head = lista;
    head->next = malloc(sizeof(struct nodo));
    if (head->next != NULL) {
        head = head->next;
        head->valor = 100;
        head->next = NULL;
    } else {
        printf("No hay memoria");
        return 0;
    }
    
    head->next = malloc(sizeof(struct nodo));
    if (head->next != NULL) {
        head = head->next;
        head->valor = 1000;
        head->next = NULL;
    } else {
        printf("No hay memoria");
        return 0;
    }
    
    head = lista;
    while(head != NULL) {
        printf("Valor : %d\n", head->valor);
        head = head->next;
    }

    head = lista;
    while(head != NULL) {
        printf("Valor : %d\n", head->valor);
        aux = head;
        head = head->next;
        free(aux);
    }

    return 0;
}