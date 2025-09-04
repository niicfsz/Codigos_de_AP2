<div align="center">
<img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
<img width="1257" height="126" alt="68b73bb8da923" src="https://github.com/user-attachments/assets/bb1ec4e3-b197-419a-912a-a6ed489db0d4" />
</div>

Esse segmento irá trabalhar novamente com a criação de funções só que dessa vez com a passagem de valores por parâmetro.

## Resumo
  Sabemos que o uso de variáveis globais não é uma das boas práticas de programação, mas como iríamos usar variáveis da função main em outras funções já que não podemos declará-las universalmente?

  
  Graças a esse questionamento foi desenvolvida a *passagem por parâmetro*, onde criamos uma função com um tipo de variável no parâmetro para que possamos apenas chamar essa função na main.  
```C
void funcaoaleatoria(int a, int b){
      int soma = a + b;
      printf("A soma dos dois números é igual a: %d", soma);
}
```
O objetivo dessa função é apenas somar dois números mas, mesmo pela sua complexidade baixa, definir operações como essa fora da função principal permite que você possa chamá-la indefinidamente na main, em vez de ter que ficar digitando esse mesmo bloco de código de novo e de novo.


Assim como possuímos diferentes tipos de variáveis, as funções seguirão a mesma regra. Acima foi usado o tipo *void* pois escrevi um bloco de código que não retorna nenhum valor, pedindo ao usuário dois valores e logo em seguida printa sua soma, reduzindo o trabalho. Veja como ficaria a main:
```C
int main(){
      int a, b;
      
      scanf("%d", &a);
      scanf("%d", &b);

      funcaoaleatoria(a, b);

      return 0;
}
```
Para entender alguns dos próximos conteúdos usaremos a noção de função e passagens por parâmetros como base. Então, bons estudos e mãos a obra!
