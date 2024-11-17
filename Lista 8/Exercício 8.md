8. Faça um programa para consultar o número, o nome e a média de todos os alunos cadastrados no
arquivo do Exercício 3.

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CURSO 100

int main() {
    FILE *ap2;
    char nome[MAX_NOME], curso[MAX_CURSO];
    int matricula;
    float nota1, nota2, media;

    ap2 = fopen("alunos.txt", "r");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Matricula\tNome\t\tMedia\n");
    printf("-------------------------------------\n");

    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matricula, curso, &nota1, &nota2) != EOF) {
        media = (nota1 + nota2) / 2;
        printf("%d\t%s\t%.2f\n", matricula, nome, media);
    }

    fclose(ap2);
    return 0;
}
```
