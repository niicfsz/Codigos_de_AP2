1-Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt” e escreva neste
arquivo em disco uma contagem de 10 em 10, que vá de 0 até 100, com um número em cada linha.
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

    fclose(arq);

    printf("Contagem anotada no arquivo.");

}

```

Nessa questão é utilizado o a função de impressão do arquivo reconhecida como "fprintf", nela utilizamos de parâmetro a variável responsável pelo arquivo e o que será escrito, seguido pelas variáveis caso seja necessário.
```C
fprintf(VariávelPtrDoArquivo, "texto");
```
