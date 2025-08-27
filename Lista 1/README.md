# Laboratório 1
O código desenvolvido acima foi feito durante as primeiras aulas de AP2, com foco em revisar sobre conteúdos passados, como operações básicas, laços de repetições, tipos de variáveis, termos iniciais, etc.

[AP2_24_Lab01_Reviso_Linguagem_C.pdf](https://github.com/user-attachments/files/22014050/AP2_24_Lab01_Reviso_Linguagem_C.pdf)

Conforme solicitado, criei um programa que imprime um menu com múltiplas opções quantas vezes forem necessárias, opções essas que eram exercícios do laboratório, envolvendo o conteúdo já abordado.

O trecho a seguir mostra uma função que identifica se uma palavra é palíndroma
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


