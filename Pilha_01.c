/* 
Escreva uma função que receba duas pilhas p1 e p2 e passe todos os elementos da pilhas p2 para  o topo de p1,
entretanto, os elementos da p2 devem ser concatenados na mesma ordem em que estão armazenados nesta pilha,
de acordo com o exemplo abaixo(você só pode utilizar estruturas do tipo pilha).
*/

// a idéia para essa questão é colocar os elementos da p2 em uma pilha auxiliar, para assim depois colocar na p1.

#include <stdio.h>
#include <stdlib.h>

// ESTRURA DA PILHA
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

PPilha concatenaPilha(PPilha p1, PPilha p2){
    PPilha aux = NULL;

    while(p2 != NULL){
        aux = push(aux, p2->info);
        p2 = Pop(p2);
    }

    while(aux != NULL){
        p1 = push(p1, aux->info);
        aux = Pop(aux);
    }

    return p1;
}