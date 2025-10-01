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
A biblioteca agrega uma função que recebe uma string que será alterada ao decorrer do código, um caractere que servirá para alterar a string e um inteiro representando o tamanho da string. Essa função vai varrer toda a frase com o auxilio da variável tam, e assim que encontrar uma vogal, deverá trocá-la pelo caractere escolhido v.

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
```
Na main é criado e declarado a frase que deve ser criptografada e logo após isso chama-se a função responsável por este trabalho.
