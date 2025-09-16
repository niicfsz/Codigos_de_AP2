<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
  <img width="614" height="126" alt="image" src="https://github.com/user-attachments/assets/085d50a9-b5e6-4320-b684-b17dfc82944a" />

</div>

# Questão 1 (2,0)
Assinale V ou F para as afirmativas a seguir. Justifique as proposições falsas.


( ) Em C, uma struct é um tipo de dado composto que pode agrupar variáveis de diferentes tipos.


( ) Variáveis globais só podem ser acessadas dentro de funções específicas.


( ) A passagem de parâmetros por valor faz uma cópia do valor do argumento passado para a função.


( ) A recursividade sempre substitui a necessidade de laços de repetição.


( ) Uma variável local é destruída assim que a execução da função em que ela foi declarada termina.




# Questão 2 (2,0)
Dada a seguinte função recursiva:
```C
int PROVA(int a, int b){
    if(b==0){
        return a;
    } else{
        return PROVA(b, a % b);
    }
}
```
Seja a = 58 e b = 12, temos a seguinte configuração:

| Número | Chamada | Valor | Retorno |
| ------ | ------- | ----- | ------- |
| 1 | PROVA(58,12) | a = 58, b = 12 | PROVA(12,10) |
| 2 | PROVA(12,10) | a = 12, b = 10 | PROVA(10,2) |
| 3 | PROVA(10,2) | a = 10, b = 2 | PROVA(5,0) |
| 4 | PROVA(5,0) | a = 5, b = 0 | 5 |

Para a = 73 e b = 13, faça outro quadro.

# Questão 3 (6,0)
Seja uma estrutura global do tipo struct CLIENTEBANCARIO, que contenha os campos: conta(int), nome(char com 30 posições), saldo(float). Assuma que o vetor struct CLIENTEBANCARIO v[3] seja de escopo local.
- a) Escreva a função void LER(), que leia todos os dados do vetor de registro. (1,0)
  
- b) Escreva a função void IMPRIMIR(), que escreva todos os dados do vetor de registro. (1,0)

- c) Assuma que cada elemento do vetor, tenha um valor diferente para o campo saldo. Escreva a função float MAIORSALDO(), que retorne o maior saldo. (2,0)
  
- d) Na função main(), utilizando o valor retornado pela chamada da função MAIORSALDO(), especifique a conta, o nome e o saldo do cliente com maior saldo. (2,0)
