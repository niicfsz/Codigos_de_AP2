# Main
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Incluir a biblioteca math.h

struct Ponto {
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
    printf("A distancia do ponto (%.2f, %.2f) ate a origem e: %.2f\n", ponto.x, ponto.y, distancia);

    return 0;
}
```
Esse exercício possui um entendimento que não envolve somente os conceitos de AP2, para concluí-la sem auxílio externo, é necessário já ter visto o início de geometria analítica. A questão exige que seja utilizado ponteiros para receberem o valor de 1 ponto no plano cartesiano, contendo uma coordenada x e outra y. Esse ponteiro mais tarde será utilizado para acessar o endereço dessas variáveis para que haja o cálculo de distância entre pontos digitado e o ponto de origem (0,0), evidenciado por essa fórmula:


$$d=\sqrt{(x_{2}-x_{1})^{2}+(y_{2}-y_{1})^{2}}$$

Podendo ser representada por esse código:
```C
sqrt((p->x * p->x) + (p->y * p->y));
```

Ou esse:
```C
sqrt(pwr(p->x, 2) + pwr(p->y, 2));
```
