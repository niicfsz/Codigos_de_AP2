# Main
```C
#include <stdio.h>
#include <stdlib.h>

struct endereco {
    char cidade[100];
    int rua;
    int numero;
};

struct pessoa {
    char nome[100];
    int idade;
    struct endereco b;
};

int main() {
    struct pessoa a;
    struct pessoa *ptr = &a;

    strcpy(ptr->nome, "Nicolas");
    ptr->idade = 18;
    strcpy(ptr->b.cidade, "Goiania");
    ptr->b.rua = 6;
    ptr->b.numero = 182;

    printf("Nome: %s\n", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("\nEndereço:\nCidade: %s\nRua: %d\nNúmero: %d\n", ptr->b.cidade, ptr->b.rua, ptr->b.numero);

    return 0;
}
```
