#include <stdio.h>

struct ficha{
    char nome[100], curso[100];
    int matricula;
};

int main(){
    struct ficha alunos[5];
    int i;

    printf("======FICHA ESTUDANTIL======\n");

    for(i=0; i<5; i++){
        printf("\nDigite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("\nDigite o nome completo do aluno %d: ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nDigite o curso do aluno %d: ", i+1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0';

        printf("\n============================\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("\n\nAluno: %s", alunos[i].nome);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nCurso: %s", alunos[i].curso);
    }
}
