# Main
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[100];
    int idade;
    float media;
};

int main()
{
    struct aluno a;
    struct aluno *ptr;

    ptr = &a;
    
    strcpy(ptr->nome, "João da Silva");
    ptr->idade = 20;                     
    ptr->media = 8.5;  

    printf("\nNome: %s", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("Média: %.2f\n", ptr->media);
}
```
Nessa questão o ponteiro é criado com um tipo específico de struct, sendo utilizado para apontar para o endereço dos campos da estrutura, de forma que sua nomenclatura deixe de ser:
```C
NomeDaVariavelDaStruct.AtributoDaStruct
```
E passe a ser:
```C
NomeDaVariavelDaStruct->AtributoDaStruct
```
