#include <string.h>
#include <stdlib.h>
#include "strmet.h"

//Retorna o índice do primeiro encontro de um determinado trecho ou letra em uma string, caso não encontre retorna -1;
int strfind(char *texto, char *cEncontro) {
    int i, j, flag = 0, position = -1;

    for (i = 0; i < strlen(texto); i++) {
        if(texto[i] == cEncontro[0]) {
            position = i;
            for (j = 0; j < strlen(cEncontro); j++) {
                if (texto[i + j] == cEncontro[j]) {
                    continue;
                }
                else {
                    flag++;
                    break; 
                }
            }

            if (flag == 0)
                break;
        }
    }

    return position;
}

//Divide a string de acordo com um criterio de divisao, aloca uma matriz com cada trecho separado no segundo parâmetro
void strsplit(char *texto, char ***destino, char *cDivisao) {
    int i, lin, newSize = 0;

    *destino = NULL;
    i = 0;

    while (newSize != -1) {
        (*destino) = (char **) realloc((*destino), (i + 1) * sizeof(char *));

        newSize = strfind(texto, cDivisao);

        if (newSize != -1) {
            (*destino)[i] = (char *) malloc((newSize + 1) * sizeof(char));
            strncpy((*destino)[i], texto, newSize);
            (*destino)[i][newSize] = '\0';
            texto = strstr(texto, cDivisao);
            texto += strlen(cDivisao);
        }
        else {
            (*destino)[i] = (char *) malloc((strlen(texto) + 1) * sizeof(char));
            strcpy((*destino)[i], texto);
        }

        i++;
    }
}