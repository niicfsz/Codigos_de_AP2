<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
  <img width="1256" height="126" alt="fontbolt (5)" src="https://github.com/user-attachments/assets/dfc778b9-844a-4e8d-89af-0c18915871d3" />
</div>

  A passagem por referência se assemelha à passagem por parâmetro na parte de adicionar valores ao argumento da função, entretanto, a passagem por referência faz o uso de ponteiros em seu argumento, diferente dos valores comuns da passagem por parâmetro. Isso ocorre por conta da criação de variáveis locais, há momentos em que uma determinada função vai fazer alterações nos valores de variáveis, e por parâmetro não é possível fazer essas alterações, visto que se trata de uma variável que só existe na main e pode ser alterada somente nela. Já por referência o uso de ponteiros acessa diretamente o endereço das variáveis permitindo que cada incógnita seja alterada.

# Exemplo
```C
void troca(int *a, int *b){
    int aux;

    aux = a;
    a = b;
    b = aux;
}
```
  A função acima utiliza ponteiros em seu argumento para que a troca de valores afete diretamente o endereço das variáveis em vez das variáveis em si, para que não haja erro durante a troca.
