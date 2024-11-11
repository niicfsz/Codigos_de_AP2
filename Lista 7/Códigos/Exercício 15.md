# Main
```C
#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    float x, y;
};

float calcularDistancia(struct Ponto *p) {
    return sqrt((p->x * p->x) + (p->y * p->y));
}

int main() {
    struct Ponto ponto;

    printf("Digite a coordenada x: ");
    scanf("%f", &ponto.x);

    printf("Digite a coordenada y: ");
    scanf("%f", &ponto.y);

    float distancia = calcularDistancia(&ponto);
    printf("A distância do ponto até a origem é: %.2f\n", distancia);

    return 0;
}
```
