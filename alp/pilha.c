#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *pilha_cria() {
    Pilha *pil;

    pil = (Pilha *) malloc(sizeof(Pilha));
    if (pil != NULL) {
        pil->p_topo = NULL;
    }

    return pil;
}

int pilha_vazia(Pilha **pil) {
    if ((*pil)->p_topo == NULL)
        return 1;
    else
        return 0;
}

void pilha_empilha(Pilha **pil, Dados *dado) {
    dado = (Dados *) malloc(sizeof(Dados));
    
}