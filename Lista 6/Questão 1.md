# Questão 1
## a) 
```C
#include <stdio.h>

void troca(int *a, int *b){
    int aux;

    aux = a;
    a = b;
    b = aux;
}

int main() {
    int n1, n2;

    printf("Digite o valor de a: ");
    scanf("%d", &n1);

    printf("Digite o valor de b: ");
    scanf("%d", &n2);


    printf("\nAntes da troca: a = %d, a& = %d, b = %d, &b = %d\n", n1, &n1, n2, &n2);

    troca(&n1, &n2);

    printf("Apos a troca: a = %d, a& = %d, b = %d, &b = %d\n", n1, &n1, n2, &n2);

    return 0;
}
```

## b)
```C
#include <stdio.h>

void incdec(int *a, int *b){
    a--;
    b++;
}

int main(){

    int n, n2;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &n);

    printf("Digite o valor do segundo numero: ");
    scanf("%d", &n2);

    printf("\nAntes: n1 = %d , n2 = %d", n, n2);

    incdec(&n,&n2);

    printf("\nDepois: n1 = %d, n2 = %d\n", n, n2);

    return 0;
}
```
A função acima utiliza ponteiros no seu argumento para indicar o endereço das variáveis que sofrerão incrementos e decrementos.

## c)
```C
#include <stdio.h>
#define PI 3.14

void circ(float a, float *b, float *c){
    b = PI * a * a;
    c = 2 * PI * a;
}

int main(){
    float a, b, c;

    printf("Digita o raio da circunferencia: ");
    scanf("%f", &a);

    circ(a,&b,&c);

    printf("\nA area do circulo eh igual a %.2f e o perimetro eh igual a %.2f", b, c);
}
```
A função "circ" recebe 3 valores, sendo dois valores com ponteiros pois irão se alterar ao decorrer do código e uma variável normal, que é o raio de uma circunferência. O cálculo será feito dentro de "circ" e suas variáveis serão printadas logo embaixo.

## d)
```C
#include <stdio.h>

void quadr(float a, float *b, float *c){
    b = a * a;
    c = 4*a;
}

int main(){
    float a, b, c;

    printf("Digita o lado do quadrado: ");
    scanf("%f", &a);


    quadr(a,&b,&c);

    printf("\nA area do quadrado eh igual a %.2f e o perimetro eh igual a %.2f", b, c);
}
```
A função "quadr" recebe 3 valores, sendo dois valores com ponteiros pois irão se alterar ao decorrer do código e uma variável normal, que é um dos lados de um quadrado. O cálculo será feito dentro do "quadr" e suas variáveis serão printadas logo embaixo.
