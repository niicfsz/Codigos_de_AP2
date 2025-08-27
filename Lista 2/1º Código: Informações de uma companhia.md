# Cadastro de companhia
No código a seguir, com o intuito de treinar struct, fiz um código que cadastra as informações de uma companhia e as imprime na tela.

Assim como comentado na pasta de "Atividades de slides" é necessário criar uma struct fora da main e então criar uma variável que seria do tipo daquela struct.
```C
#include <stdio.h>

//Declaração da struct
struct companhia{
    char nome[100], area[100];
    float valor, valor0;
    double variacao;
};

int main(){

    //Criação da variável do tipo struct
    struct companhia empresa;

    printf("==============================");

    //Quando trabalhamos com informações de struct, para escanear, printar ou qualquer outra operação relacionado a estrutura nos referimos a variável como (nome da variável).(informacão da struct)
    printf("\nDigite o nome da companhia: ");
    fgets(empresa.nome, sizeof(empresa.nome), stdin);
    empresa.nome[strcspn(empresa.nome, "\n")] = '\0';


    printf("Digite a area de atuacao da companhia: ");
    fgets(empresa.area, sizeof(empresa.area), stdin);
    empresa.area[strcspn(empresa.area, "\n")] = '\0';

    printf("Digite o valor atual da acao: ");
    scanf("%f", &empresa.valor);

    printf("Digite o valor anterior da acao: ");
    scanf("%f", &empresa.valor0);

    printf("Digite o valor (em %) da variacao da acao: ");
    scanf("%lf", &empresa.variacao);

    printf("==============================");

    printf("\n\n===INFORMACOES DA COMPANHIA===");
    printf("\nNome: %s", empresa.nome);
    printf("\nArea de atuacao: %s", empresa.area);
    printf("\nValor atual: %.2f", empresa.valor);
    printf("\nValor anterior: %.2f", empresa.valor0);
    printf("\nValor da variacao: %.2lf %\n", empresa.variacao);

    printf("==============================\n\n");

    return 0;
}
```
