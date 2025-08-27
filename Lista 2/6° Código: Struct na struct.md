# Registro de um cidadão
Impressão de informações de duas structs da tela

```C
#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[100], cep[20];
    int n;
};

struct cliente{
    struct endereco dados;
    char nome[100];
    float saldo;
};

int main(){

    struct cliente a;

    strcpy(a.nome, "Nicolas Fernandes");
    strcpy(a.dados.rua, "Rua 006");
    a.dados.n = 1234;
    strcpy(a.dados.cep, "758000-0");
    a.saldo = 1250.00;

    strcpy(a.nome, "Eles tao de olho em nois");
    strcpy(a.dados.rua, "Rua BH 2");
    a.dados.n = 567;
    strcpy(a.dados.cep, "321654-32");
    a.saldo = 1500.00;

    printf("Nome: %s\n", a.nome);
    printf("Rua: %s\n", a.dados.rua);
    printf("Numero: %d\n", a.dados.n);
    printf("CEP: %s\n", a.dados.cep);
    printf("Saldo: %.2f\n", a.saldo);

    return 0;
}
```

O código acima abrange um conceito que é usado para a criação de outra camada de informações dentro da struct, no exemplo, possuímos a varíavel cliente que carrega 3 informações, onde uma delas contém mais 3 dados. A criação da struct dentro da struct basicamente é uma criação de uma struct na main, só que dentro de outra struct, a nomenclatura da variável fica assim:
```C
NomeDaVariavel.InformaçaoDaStruct.InformacaoDaStructNaStruct
```
