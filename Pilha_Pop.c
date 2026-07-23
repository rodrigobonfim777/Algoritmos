#include <stdio.h>
#include <stdlib.h>

// ESTRURA DA PILHA
typedef struct pilha{
    int info;
    struct  pilha *prox;
} TPilha;
typedef TPilha *PPilha;

int Pop(PPilha pilha){
    PPilha temp;
    int valor;

    if(pilha == NULL){
        printf("Pilha vazia\n");
        return -1;
    }

    valor = pilha->info;

    temp = pilha;
    pilha = pilha->prox;
    free(temp);

    return valor;
}