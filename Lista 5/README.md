<div align="center">
<img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
<img src="https://github.com/user-attachments/assets/50296ed0-4891-44d8-98eb-21e9d9796915" />
</div>
<h2></h2>

O conteúdo seguinte é sobre recursividade, que se baseia em uma função que chama ela mesma até encontrar seu caso base.

# Resumo
Um exemplo simples de recursão é a seguinte função:
```C
int soman(int n){
    if(n==1){
        return 1;
    } else{
        return n + soman(n - 1);
    }
}
```
Nesse caso a função vai somar um número n com seus anteriores até que o n = 1, no caso do n=5 seria retornado 5 + 4 + 3 + 2 + 1.
