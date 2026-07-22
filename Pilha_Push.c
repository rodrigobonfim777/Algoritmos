#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int info;
    struct  pilha *prox;
} TPilha;
typedef TPilha *PPilha;

PPilha push(PPilha pilha, int x){
    // CRIANDO NOVO NÓ COM A INFORMAÇÃO X
    PPilha novo = (PPilha) malloc(sizeof(TPilha));
    novo -> info = x;

    // NOVO APONTANDO PARA O TOPO DA PILHA
    novo -> prox = pilha;

    // AGORA O TOPO É O NOVO NÓ
    pilha = novo;
    
    return pilha;
}