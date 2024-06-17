#include <stdio.h>
#include <string.h>
#include "calculadora.h"

int main() {
    char posFixa[] = "0.5 45 sen 2 ^ +";
    
    char posFixaCopy[512];
    strcpy(posFixaCopy, posFixa);
    char *inFixa = getFormaInFixa(posFixaCopy);
    
    printf("Expressão Infixa: %s\n", inFixa);

    strcpy(posFixaCopy, posFixa);
    float valor = getValor(posFixaCopy);
    
    printf("Valor da Expressão: %.8f\n", valor);

    return 0;
}