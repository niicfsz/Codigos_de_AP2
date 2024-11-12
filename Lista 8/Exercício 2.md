2- Faça um programa que renomeie o arquivo criado no exercício 1, para “matriculados.txt”.
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

    rename("C:\\Users\\AlunoBCC\\Desktop\\dados.txt", "C:\\Users\\AlunoBCC\\Desktop\\matriculados.txt");

    printf("Contagem anotada no arquivo.");

}
```
