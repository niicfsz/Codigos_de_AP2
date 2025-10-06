# Questão 7
## Main
```C
#include <stdio.h>

struct ESTUDANTE{
    char nome[50];
    int idade;
    float nota;
};

void atualizarEstudante(struct ESTUDANTE *aluno){
    printf("\n\nDigite a nova idade do aluno: ");
    scanf("%d", &aluno->idade);

    printf("Digite a nova nota do aluno: ");
    scanf("%f", &aluno->nota);
}

int main(){
    struct ESTUDANTE aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    while (getchar() != '\n');

    atualizarEstudante(&aluno);

    printf("\n\nNome: %s", aluno.nome);
    printf("Nova idade: %d", aluno.idade);
    printf("\nNova nota: %.1f\n\n", aluno.nota);

    return 0;
}
```
Esse programa utiliza a passagem por referência para receber as informações de um aluno e substituílas/sobrepor com informações novas.
