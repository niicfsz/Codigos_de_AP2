# Main
```C
#include <stdio.h>

int somar(){
    int v[5];
    int *ptr = v;
    int soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um número para a posição %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5; i++){
        soma += *(ptr + i);
    }
    
    return soma;
}

int main(){
    int resultado = somar();
    printf("Soma dos elementos do vetor: %d\n", resultado);
    return 0;
}
```
