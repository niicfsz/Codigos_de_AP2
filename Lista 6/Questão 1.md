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

    printf("Digita a area da circunferencia: ");
    scanf("%f", &b);

    printf("Digita o perimetro da circunferencia: ");
    scanf("%f", &c);

    circ(a,&b,&c);

    printf("\nA area do circulo eh igual a %.2f e o perimetro eh igual a %.2f", b, c);
}
```

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

    printf("Digita a area do quadrado: ");
    scanf("%f", &b);

    printf("Digita o perimetro do quadrado: ");
    scanf("%f", &c);

    quadr(a,&b,&c);

    printf("\nA area do quadrado eh igual a %.2f e o perimetro eh igual a %.2f", b, c);
}
```
