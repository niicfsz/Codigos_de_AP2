#include <stdio.h>
#include <string.h>

struct ficha {
    int matricula;
    char nome[100];
    float nota1, nota2, nota3, media;
};

int main() {
    struct ficha a[5];
    int i;
    int maiorNota1 = 0;
    int maiorMedia = 0;
    int menorMedia = 0;

    printf("==============================================");

    for (i = 0; i < 5; i++) {
        printf("\nDigite a matricula do aluno %d: ", i + 1);
        scanf("%d", &a[i].matricula);

        getchar();

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';

        printf("Digite as 3 notas do aluno:\n");
        printf("Nota 1: ");
        scanf("%f", &a[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &a[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &a[i].nota3);

        a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3;
    }

    for (i = 1; i < 5; i++) {
        if (a[i].nota1 > a[maiorNota1].nota1) {
            maiorNota1 = i;
        }

        if (a[i].media > a[maiorMedia].media) {
            maiorMedia = i;
        }

        if (a[i].media < a[menorMedia].media) {
            menorMedia = i;
        }
    }

    printf("\n==============================================");

    printf("\n\nO aluno com maior nota na prova 1 eh: %s (Nota: %.2f)\n", a[maiorNota1].nome, a[maiorNota1].nota1);
    printf("\nO aluno com maior media geral eh: %s (Media: %.2f)\n", a[maiorMedia].nome, a[maiorMedia].media);
    printf("\nO aluno com menor media geral eh: %s (Media: %.2f)\n", a[menorMedia].nome, a[menorMedia].media);

    printf("\nAlunos aprovados:\n");
    for (i = 0; i < 5; i++) {
        if (a[i].media >= 6.0) {
            printf("%s (Media: %.2f)\n", a[i].nome, a[i].media);
        }
    }

    printf("\nAlunos reprovados:\n");
    for (i = 0; i < 5; i++) {
        if (a[i].media < 6.0) {
            printf("%s (Media: %.2f)\n", a[i].nome, a[i].media);
        }
    }

    return 0;
}
