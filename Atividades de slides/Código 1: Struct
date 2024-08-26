#include <stdio.h>

struct ficha{
    int matricula;
    char nome[100];
    float nota1, nota2;
};

int main(){

    int i;
    struct ficha alunos[3];
    float media;

    printf("======FICHA ESTUDANTIL======\n");

    for(i=0; i<3; i++){
        printf("\nDigite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("\nDigite o nome completo do aluno %d: ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nDigite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);

        printf("\nDigite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);

        getchar();

        printf("\n============================");
    }

     for (int i = 0; i < 3; i++) {
        media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        printf("\n\nAluno: %s\n", alunos[i].nome);
        printf("\nMatricula: %d\n", alunos[i].matricula);
        printf("\nMedia: %.2f\n\n", media);
    }

}
