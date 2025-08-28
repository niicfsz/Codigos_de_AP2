# Fibonacci
Código que imprime a sequência de fibonacci até o enésimo termo.

## Biblioteca
```C
#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

#include <stdio.h>

int fibonacci(){

    printf("\nSequencia de Fibonacci ate %d: ", n);

    while(proximo <= n){
        printf("%d", proximo);
        a = b;
        b = proximo;
        proximo = a + b;
    }

    return 0;
}

#endif // FIBONACCI_H_INCLUDED
```
Nesta biblioteca criamos uma função que calcula o fibonacci,que por sinal não necessita parâmetros, em vista que criamos uma variável global na main que pode ser utilizada em qualquer função sem precisar ser criada dentro dela.

## Main
```C
#include <stdio.h>
#include "fibonacci.h"

int n, a = 0, b = 1, proximo;

int main(){

    printf("Digite um numero para sequencia de fibonacci: ");
    scanf("%d", &n);

    fibonacci();

    printf("\n\n");

    return 0;
}
```
