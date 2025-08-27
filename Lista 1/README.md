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


```C

```


