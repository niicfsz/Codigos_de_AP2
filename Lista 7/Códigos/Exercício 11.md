# Main
```C
#include <stdio.h>
#include <stdlib.h>

void printv(){
    int v[5], i;
    int *ptr = v;

    for(i = 0; i < 5; i++){
        printf("Digite o valor da %d posicao do vetor: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Valor %d: %d\n", i+1, *(ptr + i));
    }
}

int main(){
    printv();
    return 0;
}
```
A função acima utiliza o recurso do ponteiro apenas para registrar no endereço da variável v os valores dos elementos do vetor.
