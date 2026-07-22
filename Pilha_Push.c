#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int info;
    struct  pilha *prox;
} TPilha;
typedef TPilha *PPilha;

PPilha push(PPilha pilha, int x){
    PPilha novo = (PPilha) malloc(sizeof(TPilha));
    novo -> info = x;
    novo -> prox = pilha;
    pilha = novo;
    return pilha;
}