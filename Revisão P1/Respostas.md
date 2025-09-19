# Questão 1
Assinale V ou F para as afirmativas a seguir. Justifique as proposições falsas.

(V) Em C, uma struct é um tipo de dado composto que pode agrupar variáveis de diferentes tipos.

(F) Variáveis globais só podem ser acessadas dentro de funções específicas.

(V) A passagem de parâmetros por valor faz uma cópia do valor do argumento passado para a função.

(F) A recursividade sempre substitui a necessidade de laços de repetição.

(V) Uma variável local é destruída assim que a execução da função em que ela foi declarada termina.

## Explicação:
"Variáveis globais só podem ser acessadas dentro de funções específicas." Essa afirmação é incorreta pois variáveis globais podem ser acessadas por qualquer função existente no código.


"A recursividade sempre substitui a necessidade de laços de repetição." Não necessáriamente a recursividade irá substituir os laços de repetição, assumir algo assim seria uma generalização absurda, isso depende bastante do tipo de programador e o contexto em que está trabalhando.

# Questão 2
Para resolver essa questão basta dividir o número "a" pelo número "b" chamar a função até que o resto seja 0, sempre substituindo "a" por "b" e "b" pelo resto da divisão de "a" por "b" na recursão

| Número | Chamada | Valor | Retorno |
| ------ | ------- | ----- | ------- |
| 1 | PROVA(73,13) | a = 73, b = 13 | PROVA(13,8) |
| 2 | PROVA(13,8) | a = 13, b = 8 | PROVA(8,5) |
| 3 | PROVA(8,5) | a = 8, b = 5 | PROVA(5,3) |
| 4 | PROVA(5,3) | a = 5, b = 3 | PROVA(3,2) |
| 5 | PROVA(3,2) | a = 3, b = 2 | PROVA(2,1) |
| 6 | PROVA(2,1) | a = 2, b = 1 | PROVA(1,0) |
| 7 | PROVA(1,0) | a = 1, b = 0 | 1 |


# Questão 3
## Letra a)
A letra "a" deseja que seja criado uma função de tipo void que leia as informações de uma variável do tipo CLIENTEBANCARIO, que é uma struct com 3 atributos.
```C
void LER(){
    //o laço de repetição for foi uasdo porque foi pedido 3 usuários diferentes.
    for(int i = 0; i < 3; i++){
        printf("Digite o número da sua conta: ");
        scanf("%d", &v[i].conta);
        printf("Digite o seu nome: ");
        fgets(v[i].nome, sizeof(v[i].nome), stdin);
        printf("Digite o saldo da sua conta: ");
        scanf("%f", &v[i].saldo);
    }
}
```

## Letra b)
A letra "b" deseja que seja criado uma função de tipo void que imprima as informações da conta do usuário na tela.
```C
void IMPRIMIR(){
    for(int i = 0; i < 3; i++){
        printf("Conta: %d", v[i].conta);
        printf("Nome: %s", v[i].nome);
        printf("Saldo: %f", v[i].saldo);
    }
}
```

## Letra c) 
A letra "c" deseja que seja criado uma função do tipo float que compare os 3 indivíduos do vetor então separe o maior saldo dos três e retorna seu valor
```C
float MAIORSALDO(v) {
    float maior = v[0].saldo;
    for (int i = 0; i < 3; i++) {
        if (v[i].saldo > maior) {
            maior = v[i].saldo;
        }
    }
    return maior;
}
```

## Letra d)
A letra "d" deseja que a main seja criada de forma que após utilizar a função LER() e IMPRIMIR() seja criado uma variável que recena o valor da MAIORSALDO(), e então imprimir os dados da conta com maior saldo.
```C
int main(){

...

float maior = MAIORSALDO(v);

    //o laço de repetição percorre os 3 indivíduos e quando acha aquele saldo que bate com o maior registrado, é impresso as informações da conta do indivíduo.
    for (int i = 0; i < 3; i++) {
        if (v[i].saldo == maior) {
            printf("\n--- Cliente com maior saldo ---\n");
            printf("Conta: %d\n", v[i].conta);
            printf("Nome: %s\n", v[i].nome);
            printf("Saldo: %.2f\n", v[i].saldo);
        }
    }

    return 0;
}
```
