# Fibonacci
Código que imprime a sequência de fibonacci até o enésimo termo.

## Biblioteca
```C
#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

#include <stdio.h>

int n, a = 0, b = 1, proximo;

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

## Main
```C
#include <stdio.h>
#include "fibonacci.h"

int main(){

    printf("Digite um numero para sequencia de fibonacci: ");
    scanf("%d", &n);

    fibonacci(n);

    printf("\n\n");

    return 0;
}
```
