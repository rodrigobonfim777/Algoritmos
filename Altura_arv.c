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

    // ÁRVORE ESTÁ VAZIA
    if(a == NULL){
        return -1;
    }
    
    // GUARDANDO O RESULTADO EM VARIAVEIS ESQ OU DIR
    he = Altura_arv(a -> esq);
    hd = Altura_arv(a -> dir);

    // SEGUINDO O CAMINHO COM RECURSÃO ATÉ CHEGAR EM NULL
    if(he > hd){
        return 1 + he;
    }
    return 1 + hd;
}