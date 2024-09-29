# Agenda
Código focado em criar compromissos em uma agenda.

```C
#include <stdio.h>
#include <string.h>

struct hora{
    int hr, min, seg;
};

struct data{
    int dia, mes, ano;
};

int main(){
    int op;
    struct hora a;
    struct data b;
    char compromisso[100] = "";
    int dataDefinida = 0, horarioDefinido = 0, compromissoDefinido = 0;

    do{
        printf("\n\n==========Menu==========\n");
        printf("1. Definir data\n");
        printf("2. Definir horário\n");
        printf("3. Definir compromisso\n");
        printf("4. Exibir informações definidas\n");
        printf("0. Sair\n\n");
        printf("Escolha uma das opções a seguir e digite seu respectivo número: ");
        scanf("%d", &op);
        getchar();

        switch(op){
            case 1:
                printf("\n\nAno: ");
                scanf("%d", &b.ano);
                printf("\nMês: ");
                scanf("%d", &b.mes);
                printf("\nDia: ");
                scanf("%d", &b.dia);
                dataDefinida = 1;
                break;

            case 2:
                printf("\n\nHora: ");
                scanf("%d", &a.hr);
                printf("\nMinutos: ");
                scanf("%d", &a.min);
                printf("\nSegundos: ");
                scanf("%d", &a.seg);
                horarioDefinido = 1;
                break;

            case 3:
                printf("\n\nDigite o compromisso do dia: ");
                fgets(compromisso, sizeof(compromisso), stdin);
                compromisso[strcspn(compromisso, "\n")] = '\0';
                compromissoDefinido = 1;
                break;

            case 4:
                if (dataDefinida && horarioDefinido && compromissoDefinido) {
                    printf("\nInformações Definidas:\n");
                    printf("\n\nData: %02d/%02d/%d\n", b.dia, b.mes, b.ano);
                    printf("\nHorário: %02d:%02d:%02d\n", a.hr, a.min, a.seg);
                    printf("\nCompromisso: %s\n", compromisso);
                } else {
                    printf("\nVocê precisa definir a data, o horário e o compromisso antes de exibir as informações.\n");
                }
                break;

            default:
                if(op == 0){
                    printf("\nSaindo...\n");
                } else{
                    printf("Opção inexistente, por favor digite novamente.\n");
                }
        }
    } while(op != 0);

    return 0;
    ```
}
