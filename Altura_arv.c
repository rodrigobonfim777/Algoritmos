#include <stdlib.h>
#include <stdio.h>

// ESTRUTURA DA ÁRVORE
typedef struct arv{
    int info;
    struct arv *esq, *dir;
} Tarv;
typedef Tarv *Parv;

int Altura_arv(Parv a){
    int he, hd;

    if(a == NULL){
        return -1;
    }
    he = Altura_arv(a -> esq);
    hd = Altura_arv(a -> dir);

    if(he > hd){
        return 1 + he;
    }
    return 1 + hd;
}