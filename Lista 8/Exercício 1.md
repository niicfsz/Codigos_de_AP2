1-Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt” e escreva neste
arquivo em disco uma contagem de 10 em 10, que vá de 0 até 100, com um número em cada linha.
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    FILE *thales;

    thales = fopen("C:\\Users\\AlunoBCC\\Desktop\\dados.txt", "w");

    if(thales == NULL){
        printf("Erro ao criar o arquivo.");
        return 1;
    }

    for(i=0; i <= 10; i++){
        fprintf(thales, "%d ", i*10);
    }

    fclose(thales);

    printf("Contagem anotada no arquivo.");

}

```
