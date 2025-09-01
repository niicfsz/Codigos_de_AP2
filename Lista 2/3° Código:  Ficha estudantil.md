# Ficha estudantil
Programa desenvolvido para portar informações de um aluno usando struct.

O código a seguir trabalha ainda com os mesmos conceitos de struct, com um adicional de vetor.
```C
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
```


O diferencial desse programa é o uso do vetor mesclado com o uso da struct, onde a nomenclatura da variável fica assim:
```C
NomeDaVariavel[PosicaoNoVetor].InformaçãoDaStruct
```
É necessário uma nomenclatura diferente para o vetor pois numa situação de for, se colocarmos apenas o nome.informação, não será possível executarmos nosso código com êxito, pois a posição do vetor não será evidenciada.
