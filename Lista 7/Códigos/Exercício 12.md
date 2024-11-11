# Main
```C
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[100];
    int idade;
    float media;
};

int main()
{
    struct aluno a;
    struct aluno *ptr;

    printf("Digite o nome do aluno: ");
    fgets(a.nome, sizeof(a.nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &a.idade);

    printf("Digite a media do aluno: ");
    scanf("%f", &a.media);

    ptr = &a;

    printf("\nNome: %s", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("Média: %.2f\n", ptr->media);
}
```
