<div align="center">
<img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
  <img width="571" height="125" alt="fontbolt" src="https://github.com/user-attachments/assets/2d6d9fd4-6e10-48fe-baaf-6bd6ae1f92c1" />
</div>

Os ponteiros são muito utilizados na hora da passagem de valores por referência das funções e também para trabalhar com variáveis que não são do escopo local daquele módulo. Na passagem da referência, as variáveis que antes eram colocadas como parâmetros se tornam ponteiros para que a variável alterada não seja a cópia local criada pela função. Fora do argumento da função, ponteiros servem para literalmente fazerem jus ao seu próprio nome, eles apontam algo, geralmente a outros ponteiros ou endereços de outras incógnitas.
```C
for (int i = 0; i < 5; i++){
        soma += *(ptr + i);
    }
```
O exemplo acima é um trecho de uma das funções dessa seção, nele é passado um vetor que terá um ponteiro ptr apontando para ele (*ptr = v), dentro do laço a variável soma irá receber o valor dos 5 elementos combinados, passando por cada posição da ordem e acessando seus reespectivos endereços com *(ptr + i). 

Lab desse conteúdo em 2024:
[Lab07_AP2_2024.pdf](https://github.com/user-attachments/files/22754922/Lab07_AP2_2024.pdf)
