#include <stdlib.h>
#include <stdio.h>

// ESTRUTURA DA ÁRVORE
typedef struct arv{
    int info;
    struct arv *esq, *dir;
} Tarv;
typedef Tarv *Parv;

Parv Busca(Parv a, int x){
    if(a == NULL){
        return NULL;
    }
    if(a -> info == x){
        return a;
    }
    if(x < a -> info){
        return Busca(a -> esq, x);
    }
    return Busca(a -> dir, x);
}