# Questão 4
## Biblioteca usada
```C
#ifndef SDGDF_H_INCLUDED
#define SDGDF_H_INCLUDED

void ordenador(float *v){
    float aux;

    for(int i = 0; i < 2; i++){
    for (int j = i + 1; j < 3; j++) {
            if (*(v+i) > *(v+j)) {
                aux = *(v+i);
                *(v+i) = *(v+j);
                *(v+j) = aux;
            }
        }
    }
}

#endif // SDGDF_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "sdgdf.h"

int main(){
    float n[3];
    int i;

    for(i = 0; i < 3; i++){
        printf("Digite um número: ");
        scanf("%f", &n[i]);
    }

    ordenador(n);

    printf("\nOrdem crescente:\n");

    for(i = 0; i < 3; i++){
        printf("%f\n", n[i]);
    }
}
```
