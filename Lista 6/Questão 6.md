# Questão 6
## Main
```C
void subspar(int m[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] % 2 == 0) { 
                m[i][j] = 1000;      
            }
        }
    }
}

int main() {
    int m[2][3];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    subspar(m);

    printf("\nMatriz[2][3] após substituição dos valores pares:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
O código acima não utiliza do artefato da passagem por referência por se tratar de um array, caso fosse uma variável comum que teria seu valor alterado, haveria a necessidade de incluir * no parâmetro e na variável dentro do módulo. A função subspar verifica cada elemento da matriz e caso ele seja divisível por 2 (par), será substituído por 1000
