# Código focado em recursividade.

```C
#include <stdio.h>

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

int main(){
    int n, op, m, m2, resultado, i;

    do{
        printf("\n\n=====MENU=====\n");
        printf("1- Questao 1\n");
        printf("2- Questao 2\n");
        printf("3- Questao 3\n");
        printf("4- Questao 4\n");
        printf("5- Questão 5\n");
        printf("6- Questao 6\n");
        printf("7- Questao 7\n");
        printf("8- Questao 8\n");
        printf("9- Questao 9\n");

        printf("\nDigite a opçao da reespectiva questao: ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nDigite um numero natural: ");
            scanf("%d", &n);

            printf("\nA soma de 1 ate %d eh igual a: %d", n, soman(n));
            break;
        case 2:
            printf("Digite um numero a seguir: ");
            scanf("%d", &m);

            printf("Digite outro numero a seguir: ");
            scanf("%d", &m2);

            printf("\n%d", m);

            for(i = 1; i < m2; i++){
                printf(" + %d", m);
            }

            printf("\n\nO resultado de %d x %d recursivamente eh = %d\n", m, m2, mult(m, m2));
            printf("O resultado de %d x %d iterativamente eh = %d", m, m2, multi(m, m2));
            break;
        }
    } while(op!=0);

    return 0;
}
```
