#include <stdlib.h>
#include <stdio.h>

typedef struct arv{
    int info;
    struct arv *esq, *dir;
} Tarv;
typedef Tarv *Parv;

Parv BuscapaiABB(Parv a, int x){
    if(a == NULL){
        return NULL;
    }
    if(a -> esq != NULL && a -> esq -> info == x || a -> dir != NULL && a -> dir -> info == x){
        return a;
    }
    if(x < a -> info){
        return BuscapaiABB(a -> esq, x);
    }
    return BuscapaiABB(a -> dir, x);
}