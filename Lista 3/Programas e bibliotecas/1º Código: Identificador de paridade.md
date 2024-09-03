# Identificador de paridade

## Biblioteca usada:
```C
#ifndef LUCAS_H_INCLUDED
#define LUCAS_H_INCLUDED

int n = 0;

int neutro()
{

    printf("Digite um número: ");
    scanf("%d", &n);
    getchar();

    if (n % 2 == 0)
    {
        printf("\nO numero digitado eh par!\n\n");
    }
    else
    {
        printf("\nO numero digitado eh impar!\n\n");
    }

    getchar();

    return 0;
}
#endif // LUCAS_H_INCLUDED
```


## Main: 
```C
#include <stdio.h>
#include "lucas.h"


int main(){
    printf("%d", neutro());
}
```
