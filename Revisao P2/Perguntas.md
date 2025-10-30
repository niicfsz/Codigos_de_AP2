1- Complete o programa abaixo, que usando a passagem de parâmetros por referência para ordenar de forma crescente três valores lidos no módulo principal.
```C
void CRESCENTE(int *a, int *b, int *c){
  //Complete o código
}

int main(){
  int x, y, z;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  //Chame a função
  printf("%d %d %d", x, y, z);
}
```



2- Faça um módulo em C que seja capaz de criar um arquivo TEXTO em disco, com o nome "dados.txt" e escreva neste arquivo em disco uma contagem de 15 em 15, que vá de 45 até 0, com um número em cada linha.



3-Seja o seguinte trecho de código:
```C
int a = 10, b = 5;
int *x, *y;
x = &a;
y = &b;
```



Determine o resultado das seguintes expressões:


a) x == &a                               
b) x* + *y                                
c) *&y                                
d) *x**y - a
