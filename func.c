#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include "bibliotecas/strmet.h"

int main() {
    int a;
    char *palavra = (char *) malloc(20 * sizeof(char)), **p_split;

    strcpy(palavra, "Casa nova");
    strsplit(palavra, &p_split, " ");
    

    return 0;
}