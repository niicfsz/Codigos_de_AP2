# Média bimestral
Biblioteca gerada com o intuito de calcular a média aritmética e ponderada de um aluno.

## Biblioteca
```C
#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED

float n1, n2, n3, p, a, p1, p2, p3, sp;

int media(){

    a = (n1+n2+n3)/3;
    p1 = n1*5;
    p2 = n2*3;
    p3 = n3*2;
    sp = p1+p2+p3;
    p = sp/10;

    printf("\n\nA media ponderada do aluno eh %.2f e a media aritmetica eh %.2f\n\n", p, a);
}
#endif // MEDIA_H_INCLUDED
```

## Main
```C
#include <stdio.h>
#include "media.h"

int main(){

    printf("Digite 3 notas de um aluno:");
    printf("\nNota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    media();

    return 0;
}
```
