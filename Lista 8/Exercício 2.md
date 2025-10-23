2- Faça um programa que renomeie o arquivo criado no exercício 1, para “matriculados.txt”.
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    FILE *arq;

    arq = fopen("C:\\Users\\AlunoBCC\\Desktop\\dados.txt", "w");

    if(arq == NULL){
        printf("Erro ao criar o arquivo.");
        return 1;
    }

    for(i=0; i <= 10; i++){
        fprintf(arq, "%d ", i*10);
    }

    rename("C:\\Users\\AlunoBCC\\Desktop\\dados.txt", "C:\\Users\\AlunoBCC\\Desktop\\matriculados.txt");

    fclose(arq);

    printf("Contagem anotada no arquivo.");

}
```
