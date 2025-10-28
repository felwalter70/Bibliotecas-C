#ifndef PILHA_H
#define PILHA_H

typedef struct _dados{
    char *nome;
    int idade;
    double salario;
    char *naturalidade;
    char *profissao;
    struct _dados *prox;
} Dados;

typedef struct {
    Dados *p_topo;
} Pilha;

Pilha *pilha_cria();
int pilha_vazia(Pilha **);
void pilha_empilha(Pilha **, Dados *);

#endif