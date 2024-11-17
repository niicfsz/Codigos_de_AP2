9. Faça um programa para consultar todos os alunos cujos nomes começam pela letra M

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NOME 100
#define MAX_CURSO 100

int main() {
    FILE *ap2;
    char nome[MAX_NOME], curso[MAX_CURSO];
    int matricula;
    float nota1, nota2;

    ap2 = fopen("alunos.txt", "r");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Alunos com nomes iniciados pela letra 'M':\n");
    printf("------------------------------------------\n");

    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matricula, curso, &nota1, &nota2) != EOF) {
        if (toupper(nome[0]) == 'M') {
            printf("Nome: %s, Matricula: %d\n", nome, matricula);
        }
    }

    fclose(ap2);
    return 0;
}
```
