# Main
```C
#include <stdio.h>

void alterarValor() {
    int numero;         
    int *ptr = &numero; 

    printf("Digite um numero: ");
    scanf("%d", &numero); 

    printf("Valor digitado: %d\n", numero);

    *ptr = *ptr + 10; 

    printf("Novo valor de numero: %d\n", numero);
}

int main() {
    alterarValor();
    return 0;
}
```
Esse módulo recebe um valor inteiro e utiliza o ponteiro para depois somar 10 nele.
