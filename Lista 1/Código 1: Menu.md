# Menu
Código baseado no aula de laboratório 1.

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int ehPalindromo(char str[]) {
    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        while (i < j && !isalnum(str[i])) {
            i++;
        }
        while (i < j && !isalnum(str[j])) {
            j--;
        }

        if (tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

bool ehPrimo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main(){

    int op, idade, horas, segundos, hrsa, n, i, nex, n2, a = 0, b = 1, proximo, vetor[10];
    unsigned long long fatorial = 1;
    char frase[100];

    do{
            printf("\n\n==========Menu==========\n");
            printf("\n1- Conversor de horas para segundos;");
            printf("\n2- Identificador de numeros");
            printf("\n3- Categorizador de idade e horas de estudo;");
            printf("\n4- Calculadora de fatorial;");
            printf("\n5- Identificador de posicao na sequencia de Fibonacci;");
            printf("\n6- Posição de numeros primos de 1 a 10;");
            printf("\n7- Identificacao de palindromo;");
            printf("\n0- Sair");
            printf("\n\nEscolha uma das opcoes acima e digite o seu reespectivo numero: ");
            scanf("%d", &op);

            switch(op){
            case 1:
                printf("\n\nDigite uma hora para ser convertida para segundos: ");
                scanf("%d", &horas);

                segundos = horas * 3600;

                printf("\n\nA quantia em segundos obtida eh %d segundos.\n\n", segundos);
                break;
            case 2:
                printf("\nDigite um numero: ");
                scanf("%d", &nex);

                if(nex > 0){
                        printf("\nO numero em questao eh positivo\n\n");
                } else if(nex < 0){
                        printf("\nO numero em questao eh negativo\n\n");
                } else{
                        printf("\nO numero em questao eh neutro\n\n");
                }
                break;
            case 3:
                printf("\n\nDigite a idade do aluno: ");
                scanf("%d", &idade);
                printf("Digite a quantidade de horas de estudo (por semana) do aluno: ");
                scanf("%d", &hrsa);

                if(idade < 18 && hrsa >= 15){
                    printf("\nO estudante em questao eh um estudante jovem!\n\n");
                } else if(idade >= 18 && idade < 25 && hrsa >= 10){
                    printf("\nO estudante em questao eh um estudante adulto!\n\n");
                } else if(idade >= 25 && hrsa > 10){
                    printf("\nO estudante em questao eh um estudante senior!\n\n");
                } else if (hrsa > 5){
                    printf("\nO estudante em questao eh um estudante desmotivado\n\n");
                } else{
                    printf("\nO estudante em questao nao eh categorizado!\n\n");
                }
                break;
            case 4:
                do {
                    printf("\n\nDigite um numero inteiro e positivo: ");
                    if (scanf("%d", &n) != 1 || n < 0) {
                        printf("Numero invalido, digite novamente.\n");
                        while (getchar() != '\n');
                    } else {
                        break;
                    }
                } while (1);

                for (i = 1; i <= n; ++i) {
                    fatorial *= i;
                }

                printf("\nO fatorial de %d eh %llu.\n\n", n, fatorial);
                break;
            case 5:
                do {
                    printf("\n\nDigite um numero inteiro positivo: ");
                    if (scanf("%d", &n2) != 1 || n2 < 0) {
                        printf("Numero invalido, digite novamente.\n");
                        while(getchar() != '\n');
                    } else {
                        break;
                    }
                } while (1);

                while (i < n2) {
                    proximo = a + b;
                    a = b;
                    b = proximo;
                    i++;
                }

                printf("\nO Fibonacci de %d eh %d.\n\n", n2, b);
                break;
            case 6:
                 for (int i = 0; i < 10; i++) {
                    if (ehPrimo(i)) {
                        vetor[i] = 1;
                    } else {
                        vetor[i] = 0;
                    }
                }

                printf("\nVetor: ");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n\n\n");
                break;
            case 7:
                printf("\n\nDigite uma frase: ");
                while ((getchar()) != '\n' && getchar() != EOF);
                fgets(frase, 256, stdin);


                frase[strcspn(frase, "\n")] = 0;

                if (ehPalindromo(frase)) {
                    printf("\nA frase eh um palindromo.\n\n");
                } else {
                    printf("\nA frase nao eh um palindromo.\n\n");
                }
                break;
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
```
