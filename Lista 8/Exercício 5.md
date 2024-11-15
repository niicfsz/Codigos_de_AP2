5- Faça um programa para alterar as notas dos alunos no arquivo criado no Exercício 3

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
    float novaNota1, novaNota2;
    int matriculaArquivo;
    float nota1, nota2;

    ap2 = fopen("alunos.txt", "r+");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite a matrícula do aluno cujas notas você deseja alterar: ");
    scanf("%d", &matriculaBusca);

    getchar(); // Limpar o buffer após scanf

    printf("Digite a nova Nota 1: ");
    scanf("%f", &novaNota1);
    printf("Digite a nova Nota 2: ");
    scanf("%f", &novaNota2);

    int alunoEncontrado = 0;

    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matriculaArquivo, curso, &nota1, &nota2) != EOF) {
        if (matriculaArquivo == matriculaBusca) {
            fprintf("")
            break;
        }
    }

    if (!alunoEncontrado) {
        printf("Aluno com matrícula %d não encontrado.\n", matriculaBusca);
    } else {
        printf("Notas alteradas com sucesso!\n");
    }

    fclose(ap2);

    return 0;
}
```
