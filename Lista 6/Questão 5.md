# Questão 5
## Biblioteca
```C
#ifndef SEILA_H_INCLUDED
#define SEILA_H_INCLUDED

void Elementos(int *v){
    for(int i = 0; i < 8; i++){
        if(v[i] >= 15 && v[i] <= 20){
            v[i] = 0;
        }
    }
}

#endif // SEILA_H_INCLUDED
```
A função "Elementos" recebe um vetor de 8 elementos e caso o número encontrado dentro de uma determinada posição da ordem esteja entre 15 e 20, ele deve ser substituído por 0.

## Main
```C
#include <stdio.h>
#include <stdlib.h>
#include "seila.h"

int main()
{
    int n[8], i;

    for(i = 0; i < 8; i++){
        printf("Digite um numero a seguir: ");
        scanf("%d", &n[i]);
    }

    printf("\n");

    Elementos(n);

    for(i = 0; i < 8; i++){
    printf("n[%d] = %d\n", i, n[i]);
    }
}
```
A main nessa questão serve para definir os elementos do vetor e chamar a função.
