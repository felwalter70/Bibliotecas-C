#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    int a;
    Dados *Dados = NULL;
    Pilha *pilha;

    pilha = pilha_cria();

    if (pilha == NULL)
        exit(1);

    a = pilha_vazia(&pilha);

    return 0;
}