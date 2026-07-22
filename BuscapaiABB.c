#include <stdlib.h>
#include <stdio.h>

// ESTRUTURA DA ÁRVORE
typedef struct arv{
    int info;
    struct arv *esq, *dir;
} Tarv;
typedef Tarv *Parv;

Parv BuscapaiABB(Parv a, int x){
    
    // SE A ÁRVORE ESTIVER VAZIA
    if(a == NULL){
        return NULL;
    }

    // SE O X ESTIVER E EXISTER A ESQ OU A DIR DA RAÍZ
    if(a -> esq != NULL && a -> esq -> info == x || a -> dir != NULL && a -> dir -> info == x){
        return a;
    }

    // CHAMANDO A RECURSÃO COM A PROPRIEDADE DA ABB. ESQ < RAÍZ < DIR
    if(x < a -> info){
        return BuscapaiABB(a -> esq, x);
    }
    return BuscapaiABB(a -> dir, x);
}