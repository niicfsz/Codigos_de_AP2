# Main
```C
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[100];
    int idade;
    float nota;
};

int main(){
    struct aluno a;
    struct aluno *ptr;

    ptr = &a;

    printf("Digite o nome do aluno: ");
    fgets(ptr->nome, sizeof(ptr->nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &ptr->idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &ptr->nota);

    printf("\nNome: %s", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("Média: %.2f\n", ptr->nota);
}
```
