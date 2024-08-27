#include <stdio.h>

struct hora{
    int hr, min, seg;
};

struct data{
    int dia, mes, ano;
};

int main(){

    struct hora a, data b;
    char compromisso[100];

    do{
            
    printf("\n\n==========Menu==========\n");
    printf("Definir data;");
    printf("Definir horario;");
    printf("Definir compromisso")
    
    switch(op){
    case 1:
    printf("Ano: ");
    scanf("%d", &b.ano);
    printf("Mes: ");
    scanf("%d", &b.mes);
    printf("Dia: ");
    scanf("%d", &b.dia);
    break;
    
    case 2:
    printf("Hora: ");
    scanf("%d", &a.hr);
    printf("Minutos: ");
    scanf("%d", &a.min);
    printf("Segundos: ");
    scanf("%d", &a.seg);
    break;
    
    case 3:
    printf("Digite o compromisso do dia: ");
    
    
    default:
    if(op == 0){
    printf("\nSaindo...\n");
            break;
    } else{
        printf("Opçao inexistente, por favor digite novamente.");
        }
            }
    }while(op != 0);

    
}
