#include <stdio.h>
#include <stdlib.h>

// ESTRURA DA PILHA
typedef struct pilha{
    int info;
    struct  pilha *prox;
} TPilha;
typedef TPilha *PPilha;

PPilha Pop(PPilha pilha){
    PPilha temp;

    if(pilha == NULL){
        printf("pilha vazia");
        return NULL;
    }

    temp = pilha;
    pilha = pilha -> prox;
    free(temp);

    return pilha;
}