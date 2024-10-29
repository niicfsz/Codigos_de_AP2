# Questão 5
## Biblioteca
```C
#ifndef SEILA_H_INCLUDED
#define SEILA_H_INCLUDED

void Elementos(int *v){
    for(int i = 0; i < 8; i++){
        if(v[i] > 15 && v[i] < 20){
            v[i] = 0;
        }
    }
}

#endif // SEILA_H_INCLUDED
```

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

