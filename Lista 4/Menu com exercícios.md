# Bibliotecas usadas:
## Biblioteca 1
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
## Biblioteca 2
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
## Biblioteca 3
```C
#ifndef QUATRO_H_INCLUDED
#define QUATRO_H_INCLUDED

#include <stdio.h>  


void SOMA_INTERVALO() {
    int o, f, i, r = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &o);

    printf("Digite outro número inteiro: ");
    scanf("%d", &f);

    if (o > f) {
        int p = o;
        o = f;
        f = p;
    }

    for (i = o + 1; i < f - 1; i++) {
        r += i;
    }
  
    printf("A soma entre os números de %d e %d é igual a %d\n", o, f, r);
}

#endif // QUATRO_H_INCLUDED

```
##

# Main
```C
#include <stdio.h>
#include "DOIS.h"
#include "TRES.h"
#include "QUATRO.h"

int main(){
    int op, n;

    do{
      printf("\n\n==========MENU==========\n");
      printf("1- Identificador de sinal de um numero;\n");
      printf("2- Conversor de segundos para horas, minutos e segundos;\n");
      printf("3- Soma de numeros dentro de um intervalo;\n");
      printf("4- Verificacao de valores de um triangulo;\n");
      printf("5- Analise combinatoria;\n");
      printf("6- Valores de taxa de estacionamento.\n\n");

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
            SOMA_INTERVALO();
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        default:

            break;
      }

    } while(op != 0);
}
```
