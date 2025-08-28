# Boletim estudantil
Código que analisa matrícula, nome e notas de 5 alunos para imprimir em uma ficha.

## Biblioteca
```C
#ifndef INCOMPLETO_H_INCLUDED
#define INCOMPLETO_H_INCLUDED

#include <stdio.h>

//Variação da declaração da struct, ao escrever "typedef struct" com o nome da struct no final da chave, não é necessário digitar struct Aluno Turma[5], pois já foi definido como struct acima.
typedef struct {
    int matricula;
    float notas[3];
} Aluno;

Aluno Turma[5];

//Passagem de parâmetro em forma de ponteiro, foi necessária visto que, caso a variável não fosse ponteiro no parâmetro, não haveria alterações no endereço de memória da variável por ela ter sido criada na main.
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

//Mesma coisa da LeAluno
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
        //Utilização de &Turma serve para que a função se relacione diretamente com a memória e não com o ponteiro
        media = CalculaMediaAluno(&Turma[i]);
        printf("Aluno %d - Media = %.2f\n", i + 1, media);
    }

    return 0;
}
```
Nesse programa trabalhamos com todos os conteúdos vistos até agora, laços de repetição, operações básicas,  bibliotecas, funções, passagem por parâmetro, etc. Todos esses conceitos melhoram na otimização e na arquitetura do código principal, tendo em vista que a complexidade e a quantidade de informações do programa principal diminuiu consideravelmente, apenas printando informações e chamando funções da biblioteca.
