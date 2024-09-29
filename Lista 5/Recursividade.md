# Código focado em recursividade.

```C
#include <stdio.h>
#include <math.h>

int soman(int n){
    if(n==1){
        return 1;
    } else{
        return n + soman(n - 1);
    }
}

int mult(int m, int m2){
    if(m2==0){
        return 0;
    } else{
        return m + mult(m, m2-1);
    }
}

int multi(int m, int m2){
    int resultado = 0;

    for (int i = 0; i < m2; i++) {
        resultado += m;
    }

    return resultado;
}

double pot(double x, int e){
    if(e == 0){
        return 1;
    } else if(e < 0){
        return 1 / pot(x, -e);
    }
    return x * pot(x, e - 1);
}

double poti(double x, int e){
    double resultado = 1;
    int positivo = e;

    if (e < 0) {
        positivo = -e;
    }

    for (int i = 0; i < positivo; i++) {
        resultado *= x;
    }

    if (e < 0) {
        return 1 / resultado;
    }

    return resultado;
}

void imprimir_multiplicacao(double x, int e) {
    if (e == 0) {
        printf("1\n");
        return;
    }

    if (e < 0) {
        printf("1 / (");
        e = -e;
    }

    for (int i = 0; i < e; i++) {
        printf("%.2lf", x);
        if (i < e - 1) {
            printf(" * ");
        }
    }

    if (e < 0) {
        printf(")");
    }

    printf("\n");
}

int fat(int b){
    if(b==1){
        return 1;
    } else{
        return b*fat(b-1);
    }
}

int fatq(int b){
    return fat(2*b)/fat(b);
}

int fib(int z){
    if(z == 0){
        return 0;
    } else if(z == 1){
        return 1;
    } else {
        return fib(z - 1) + fib(z - 2);
    }
}

int somat(int in){
    if(in == 1){
        return 0;
    } else{
        return 2*(in - 1) + somat(in - 1);
    }
}

int tib(int v){
    if(v == 0){
        return 0;
    } else if(v == 1){
        return 0;
    } else if(v == 2){
        return 1;
    } else if(v > 2){
        return tib(v - 1) + tib(v - 2) + tib(v - 3);
    }
}

int pell(int u){
    if(u == 0){
        return 0;
    } else if(u == 1){
        return 1;
    } else if(u > 2){
        return 2 * pell(u - 1) + pell(u - 2);
    }
}
int main(){
    int n, op, m, m2, resultado, i, e, b, z, in, v, vr, u;
    double x;

    do{
        printf("\n\n=====MENU=====\n");
        printf("1- Questao 1;\n");
        printf("2- Questao 2;\n");
        printf("3- Questao 3;\n");
        printf("4- Questao 4;\n");
        printf("5- Questão 5;\n");
        printf("6- Questao 6;\n");
        printf("7- Questao 7;\n");
        printf("8- Questao 8;\n");
        printf("0- Sair.\n");

        printf("\nDigite a opçao da reespectiva questao: ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nDigite um numero natural: ");
            scanf("%d", &n);

            printf("\nA soma de 1 ate %d eh igual a: %d", n, soman(n));
            break;
        case 2:
            printf("\nDigite um numero a seguir: ");
            scanf("%d", &m);

            printf("Digite outro numero a seguir: ");
            scanf("%d", &m2);

            printf("\n%d", m);

            for(i = 1; i < m2; i++){
                printf(" + %d", m);
            }

            printf("\nO resultado de %d x %d recursivamente eh = %d\n", m, m2, mult(m, m2));
            printf("O resultado de %d x %d iterativamente eh = %d", m, m2, multi(m, m2));
            break;
        case 3:
            printf("\nDigite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de n: ");
            scanf("%d", &e);

            printf("\nResultado (recursivo): %.2lf\n", pot(x, e));
            printf("Resultado (iterativo): %.2lf\n", poti(x, e));

            printf("Multiplicacao de x * x (%d vezes): ", e);
            imprimir_multiplicacao(x, e);
            break;
        case 4:
            printf("\nDigite o valor de n: ");
            scanf("%d", &b);

            printf("\n\nResultado de (2*%d)!/%d! = %d", b, b, fatq(b));
            break;
        case 5:
            printf("\nDigite uma posicao da sequencia de fibonacci: ");
            scanf("%d", &z);

            printf("\nO %d posicao de sequencia de fibonacci: %d", z, fib(z));
            break;
        case 6:
            printf("\nDigite o indice n da somatória: ");
            scanf("%d", &in);

            printf("\nO valor da somatoria de indice final %d eh igual a: %d", in, somat(in));
            break;
        case 7:
            printf("\nDigite o valor de n para ver seu enesimo termo na sequencia de tribonacci: ");
            scanf("%d", &v);

            vr = tib(v);

            printf("\nO %d termo da sequencia de tribonacci eh: %d", v, vr);
            break;
        case 8:
            printf("\nDigite o enesimo termo da sequencia de Pell: ");
            scanf("%d", &u);

            printf("\nO %d termo da sequencia de Pell eh: %d", u, pell(u));
            break;
        default:
            printf("\nSaindo...\n\n");
            break;
    }

    } while(op!=0);

    return 0;
}
```
