5 – O que as linhas abaixo fazem? Escreva como um comentário
```C
int i=7, j=3, c; //Declarando 3 variáveis do tipo inteiro, i ,j e c, sendo i=7 e j=3
int *p; //Declarando uma variável tipo inteiro ponteiro p
int **r; //Declarando uma variável tipo inteiro ponteiro de ponteiro r
p = &i; //Apontando o ponteiro p para o endereço da variavel i
r = &p; //Apontando o ponteiro r para o endereço do ponteiro p
c = **r + j; //Definindo a variavel c = conteudo do ponteiro apontado pelo ponteiro r + j
```
