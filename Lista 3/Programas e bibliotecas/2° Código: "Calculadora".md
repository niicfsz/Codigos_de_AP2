# Calculadora simples
Biblioteca criada para calcular +,-,*,/ de 2 números.

## Biblioteca:
```C
#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

int somar(int a, int b){
    return a+b;
}


int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (double)a / (double)b;
}

#endif // CALC_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "calc.h"

int main() {
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", somar(a, b));
    printf("Subtracao: %d\n", subtrair(a, b));
    printf("Multiplicacao: %d\n", multiplicar(a, b));
    printf("Divisao: %.2f\n", dividir(a, b));

    return 0;
}
```
Já neste código, criamos a biblioteca "calc.h" que contém algumas funções de operações matemáticas, que  precisam de parâmetros para seu funcionamento.


```C
//Exemplo soma
int somar(int a, int b){
    return a+b;
}
//A função recebe dois inteiros e enfim retorna o valor da soma
```
