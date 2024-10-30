# Questão 2
## Biblioteca usada
```C
#ifndef CRIPT_H_INCLUDED
#define CRIPT_H_INCLUDED

void Criptografia(char *p, char v, int tam) {
    for (int i = 0; i < tam; i++) {
        if (tolower(p[i]) == 'a' || tolower(p[i]) == 'e' || 
            tolower(p[i]) == 'i' || tolower(p[i]) == 'o' || 
            tolower(p[i]) == 'u') {
            p[i] = v; 
        }
    }
}

#endif // CRIPT_H_INCLUDED
```
## Main
```C
#include <stdio.h>
#include "cript.h"

int main() {
    char frase[100], caractere;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    printf("Digite o caractere para substituir as vogais: ");
    scanf("%c", &caractere);
    
    int tamanho = strlen(frase) - 1;

    Criptografia(frase, caractere, tamanho);

    printf("Frase criptografada: %s\n", frase);

    return 0;
}
