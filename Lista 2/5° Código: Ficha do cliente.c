#include <stdio.h>
#include <math.h>
#include <string.h>

struct ficha {
    char nome[100], email[100], endereco[100], sexo;
    int dia, mes, ano, idade;
    long long int cpf;
    float altura, peso, imc;
};

int main() {

    struct ficha a;

    printf("====================FICHA DO CLIENTE====================");

    printf("\nDigite seu nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);
    a.nome[strcspn(a.nome, "\n")] = '\0';

    printf("\nDigite o seu email: ");
    fgets(a.email, sizeof(a.email), stdin);
    a.email[strcspn(a.email, "\n")] = '\0';

    printf("\nDigite o seu endereço: ");
    fgets(a.endereco, sizeof(a.endereco), stdin);
    a.endereco[strcspn(a.endereco, "\n")] = '\0';

    printf("\nDigite o seu sexo (M/F): ");
    scanf("%c", &a.sexo);
    getchar();

    printf("\nDigite sua data de nascimento:\n");
    printf("Dia: ");
    scanf("%d", &a.dia);
    printf("Mes: ");
    scanf("%d", &a.mes);
    printf("Ano: ");
    scanf("%d", &a.ano);

    printf("\nDigite sua idade: ");
    scanf("%d", &a.idade);

    printf("\nDigite o seu CPF: ");
    scanf("%lld", &a.cpf);

    printf("\nDigite o seu peso: ");
    scanf("%f", &a.peso);

    printf("\nDigite a sua altura: ");
    scanf("%f", &a.altura);

    a.imc = a.peso / pow(a.altura, 2);

    printf("\n\n=================INFORMACOES DO CLIENTE=================");

    printf("\nNome: %s", a.nome);
    printf("\nEmail: %s", a.email);
    printf("\nEndereço: %s", a.endereco);
    printf("\nSexo: %c", a.sexo);
    printf("\nData de nascimento: %02d/%02d/%04d", a.dia, a.mes, a.ano);
    printf("\nIdade: %02d", a.idade);
    printf("\nCPF: %lld", a.cpf);
    printf("\nIMC: %.2f\n", a.imc);

    return 0;
}
