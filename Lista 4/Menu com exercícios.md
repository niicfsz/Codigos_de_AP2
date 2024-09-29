# Menu com exercícios
Código interativo com múltiplas bibliotecas para resolver exercícios de uma lista.

## Bibliotecas usadas:
### Biblioteca 1
```C
#ifndef DOIS_H_INCLUDED
#define DOIS_H_INCLUDED

#include <stdio.h>

int POSITIVO_NEGATIVO(){

    int n;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    if(n > 0){
        return 1;
    }else{
        return 0;
    }
}

#endif // DOIS_H_INCLUDED
```
### Biblioteca 2
```C
#ifndef TRES_H_INCLUDED
#define TRES_H_INCLUDED

void CONVERSOR_SEGUNDOS(){

    int s, ss, m, h;

    printf("\nDigite uma quantidade de segundos para fazer uma conversao para horas, minutos e segundos: ");
    scanf("%d", &s);

    h = s/3600;
    m = (s % 3600)/60;
    ss = s % 60;

    printf("\n%d segundos eh equivalente a %d horas %d minutos e %d segundos.\n", s, h, m, ss);
}

#endif // TRES_H_INCLUDED
```
### Biblioteca 3
```C
#ifndef QUATRO_H_INCLUDED
#define QUATRO_H_INCLUDED


static inline int SOMA_INTERVALO(int num1, int num2) {
    int soma = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        soma += i;
    }

    printf("\n\nO resultado da soma do intervalo entre %d e %d eh igual a: ", num1, num2);

    return soma;
}

#endif // QUATRO_H_INCLUDED

```
### Biblioteca 4 
```C
#ifndef CINCO_H_INCLUDED
#define CINCO_H_INCLUDED

#include <stdio.h>

void VERIFICACAO_TRIANGULO(){

    int a, b, c;

    printf("\nDigite o valor de um dos lados do triangulo: ");
    scanf("%d", &a);

    printf("Digite o valor do outro lado do triangulo: ");
    scanf("%d", &b);

    printf("Digite o ultimo valor do lado do triangulo: ");
    scanf("%d", &c);

    if((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(a - b) < c && c < a + b)) {

        if(a == b && b == c) {
            printf("\n\nO seu triangulo existe e eh um triangulo equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("\n\nO seu triangulo existe e eh um triangulo isosceles\n");
        } else {
            printf("\n\nO seu triangulo existe e eh um triangulo escaleno\n");
        }
} else{
    printf("\n\nOs valores nao formam um triangulo.");
    return 0;
    }
}

#endif // CINCO_H_INCLUDED
```
### Biblioteca 5
```C
#ifndef SEIS_H_INCLUDED
#define SEIS_H_INCLUDED

#include <stdio.h>

static inline unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

static inline unsigned long long combinacao(int n, int p) {
    if (p > n || p < 0) {
        return 0;
    }
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

static inline void COMBINACAONP() {
    int n, p;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    printf("\nDigite o valor de p: ");
    scanf("%d", &p);

    unsigned long long resultado = combinacao(n, p);
    printf("C(%d, %d) = %llu\n", n, p, resultado);
}

#endif // SEIS_H_INCLUDED

```
### Biblioteca 6
```C
#ifndef SETE_H_INCLUDED
#define SETE_H_INCLUDED

#include <stdio.h>

float CALCULA_TAXAS(int horas);

float CALCULA_TAXAS(int horas) {
    float taxa;
    if (horas <= 3) {
        taxa = 20.0;
    } else if (horas < 24) {
        taxa = 20.0 + 5.0 * (horas - 3);
        if (taxa > 50.0) {
            taxa = 50.0;
        }
    } else {
        taxa = 50.0;
    }
    return taxa;
}

void CALCULO_ESTACIONAMENTO() {
    int horas[3];
    float valor[3];
    float total = 0.0;

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Digite as horas estacionadas para o cliente %d: ", i + 1);
        scanf("%d", &horas[i]);


        valor[i] = CALCULA_TAXAS(horas[i]);

        // Acumular o total
        total += valor[i];
    }

    printf("\n--------------------------------------\n");
    printf("Cliente\tHoras\tTaxa\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\t%d\t%.2f\n", i + 1, horas[i], valor[i]);
    }

    printf("--------------------------------------\n");
    printf("TOTAL\t\t%.2f\n", total);

    return 0;
}
#endif // SETE_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "DOIS.h"
#include "TRES.h"
#include "QUATRO.h"
#include "CINCO.h"
#include "SEIS.h"
#include "SETE.h"

int main(){
    int op, n, num1, num2;

    do{
      printf("\n\n==========MENU==========\n");
      printf("1- Identificador de sinal de um numero;\n");
      printf("2- Conversor de segundos para horas, minutos e segundos;\n");
      printf("3- Soma de numeros dentro de um intervalo;\n");
      printf("4- Verificacao de valores de um triangulo;\n");
      printf("5- Analise combinatoria;\n");
      printf("6- Valores de taxa de estacionamento;\n");
      printf("0- Sair.\n\n");

      printf("Digite uma das opcoes acima: ");
      scanf("%d", &op);

      switch(op){
        case 1:
            printf("%d", POSITIVO_NEGATIVO(n));
            break;
        case 2:
            CONVERSOR_SEGUNDOS();
            break;
        case 3:
            printf("%d", SOMA_INTERVALO(num1, num2));
            break;
        case 4:
            VERIFICACAO_TRIANGULO();
            break;
        case 5:
            COMBINACAONP();
            break;
        case 6:
            CALCULO_ESTACIONAMENTO();
            break;
        case 0:
            printf("Saindo...");
            break;
        default:
            printf("Opcao invalida, digite novamente.");
            break;
      }
    } while(op != 0);

    return 0;
}
```
