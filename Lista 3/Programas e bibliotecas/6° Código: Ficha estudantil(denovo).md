## Biblioteca
```C
#ifndef INCOMPLETO_H_INCLUDED
#define INCOMPLETO_H_INCLUDED

#include <stdio.h>

typedef struct {
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

void LeAluno(Aluno* aluno) {
    printf("Digite a matricula do aluno: \n");
    scanf("%d", &aluno->matricula);
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &aluno->notas[i]);
    }
}

void ImprimeTurma(const Aluno turma[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matricula: %d\n", turma[i].matricula);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, turma[i].notas[j]);
        }
        printf("\n");
    }
}

float CalculaMediaAluno(const Aluno* aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno->notas[i];
    }
    return soma / 3.0;
}

#endif // INCOMPLETO_H_INCLUDED
```

## Main
```C
#include "incompleto.h"

int main() {
    float media;

    for(int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        LeAluno(&Turma[i]);
    }

    ImprimeTurma(Turma, 5);

    for(int i = 0; i < 5; i++) {
        media = CalculaMediaAluno(&Turma[i]);
        printf("Aluno %d - Media = %.2f\n", i + 1, media);
    }

    return 0;
}
```
