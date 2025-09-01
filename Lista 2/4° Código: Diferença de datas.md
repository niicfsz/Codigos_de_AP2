# Diferença entre duas datas
O código a seguir pede ao usuário duas datas diferentes e calcula o quanto se passou entre cada uma.

```C
#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct data a;
    struct data b;
    int difano, difmes, difdia;

    printf("Digite a primeira data: ");
    printf("\nDia: ");
    scanf("%d", &a.dia);
    printf("Mes: ");
    scanf("%d", &a.mes);
    printf("Ano: ");
    scanf("%d", &a.ano);

    printf("\n\nAgora digite a segunda data: ");
    printf("\nDia: ");
    scanf("%d", &b.dia);
    printf("Mes: ");
    scanf("%d", &b.mes);
    printf("Ano: ");
    scanf("%d", &b.ano);

    if ((a.ano > b.ano) || (a.ano == b.ano && a.mes > b.mes) || (a.ano == b.ano && a.mes == b.mes && a.dia > b.dia)) {
        struct data temp = a;
        a = b;
        b = temp;
    }

    difano = b.ano - a.ano;
    difmes = b.mes - a.mes;
    difdia = b.dia - a.dia;


    if (difdia < 0) {
        difdia += 30;
        difmes--;
    }
    if (difmes < 0) {
        difmes += 12;
        difano--;
    }

    printf("\nA diferença entre as datas eh de %d anos, %d meses, %d dias.\n", difano, difmes, difdia);
    return 0;
}

    return 0;
}
```

O programa calcula a diferença de datas de maneira que o valor a sempre será uma data mais recente que sofrerá subtração do valor b, caso contrário é criado uma variável temp(ou aux) que será usada exclusivamente para fazer a troca de datas, também acrescentando o limite de valores, sendo no máximo 30(eu ignorei fevereiro e os outros meses com 31kkk) para os dias e nos meses no máximo 12.
