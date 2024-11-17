7. Faça um programa para excluir os alunos que foram reprovados, sabendo que para serão reprovados
se a média aritmética for menor do que 6,0.
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
    long posicaoInicio;

    ap2 = fopen("alunos.txt", "r+");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matricula, curso, &nota1, &nota2) != EOF) {
        media = (nota1 + nota2) / 2;

        if (media < 6.0) {
            // Reposicionar o ponteiro para sobrescrever a linha do reprovado
            posicaoInicio = ftell(ap2) - (strlen(nome) + 2 + sizeof(int) + 2 + strlen(curso) + 2 + 2 * sizeof(float) + 1);
            fseek(ap2, posicaoInicio, SEEK_SET);

            // Preencher a linha com espaços para "excluir" o aluno
            fprintf(ap2, "%-*s\n", (int)(strlen(nome) + 2 + sizeof(int) + 2 + strlen(curso) + 2 + 2 * sizeof(float)), " ");
        }
    }

    fclose(ap2);
    printf("Alunos reprovados foram excluídos!\n");
    return 0;
}
```
