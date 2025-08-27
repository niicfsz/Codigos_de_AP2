# Laboratório 1
O código desenvolvido acima foi feito durante as primeiras aulas de AP2, com foco em revisar sobre conteúdos passados, como operações básicas, laços de repetições, tipos de variáveis, termos iniciais, etc.

[AP2_24_Lab01_Reviso_Linguagem_C.pdf](https://github.com/user-attachments/files/22014050/AP2_24_Lab01_Reviso_Linguagem_C.pdf)

Conforme solicitado, criei um programa que imprime um menu com múltiplas opções quantas vezes forem necessárias, opções essas que eram exercícios do laboratório, envolvendo o conteúdo já abordado.

O trecho a seguir mostra uma função que identifica se uma palavra é palíndroma;
```C
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
```
O while nesse caso faz com que o bloco de código se repita até que i seja maior ou igual a j, ou seja, i e j caminharão da esquerda pra direita e da direita pra esquerda reespectivamente comparando letra por letra para verificar se essa palavra é equivalente a sua inversa.

O próximo segmento verifica se um número é primo;
```C
bool ehPrimo(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false; 

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}
}
```
O conceito de número primo faz com que essa função não seja tão complexa de ser desenvolvida, entretanto, o laço de repetição dele pode trazer algumas dúvidas. É dito que um número primo só é divisível por ele e por 1, então é necessário fazer todos os testes de divisão de 1 até o número desejado, porém, já eliminamos os números negativos, o 0, 1 e os pares, então começaremos a partir do 3. Dando sequência, para descobrirmos até onde o laço de repetição deve ir, assumimos que o maior algarismo que pode dividir o nosso número desejado e sobrar 0, seria sua própria raiz quadrada, explicando então o "for (int i = 3; i <= sqrt(num); i += 2){"

# Main
Na main, coloquei os cálculos que exegiam menos linhas e o laço de repetição que permite que o menu seja printado quantas vezes forem necessárias, graças ao do-while, que também permite que o usuário digite um número na entrada e apartir desse número seja impresso na tela uma das opções do menu por conta do switch-case
```C
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
```
Qualquer outra dúvida podem me contactar por uma das fontes do README do meu perfil.


