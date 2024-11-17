6-Faça um programa para alterar o curso dos alunos do arquivo criado no Exercício 3

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CURSO 100

int main() {
    FILE *ap2;
    char nome[MAX_NOME], curso[MAX_CURSO];
    int matriculaBusca, matricula;
    char novoCurso[MAX_CURSO];
    int matriculaArquivo;
    float nota1, nota2;

    ap2 = fopen("alunos.txt", "r+");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite a matrícula do aluno cujas notas você deseja alterar: ");
    scanf("%d", &matriculaBusca);

    getchar();

    printf("Digite o novo curso do aluno: ");
    fgets(novoCurso, sizeof(novoCurso), stdin);
    novoCurso[strcspn(novoCurso, "\n")] = '\0';

    int alunoEncontrado = 0;


    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matriculaArquivo, curso, &nota1, &nota2) != EOF) {
        if (matriculaArquivo == matriculaBusca) {
            alunoEncontrado = 1;

            fseek(ap2, -(long)(strlen(nome) + 2 + sizeof(int) + 2 + strlen(curso) + 2 + 2 * sizeof(float) + 1), SEEK_CUR);

            fprintf(ap2, "%s, %d, %s, %.2f, %.2f\n", nome, matriculaArquivo, novoCurso, nota1, nota2);

            break;
        }
    }

    if (!alunoEncontrado) {
        printf("Aluno com matrícula %d não encontrado.\n", matriculaBusca);
    } else {
        printf("Curso alterado com sucesso!\n");
    }

    fclose(ap2);
    return 0;
}
```
