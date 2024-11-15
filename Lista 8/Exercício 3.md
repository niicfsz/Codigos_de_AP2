3- Faça um programa para criar um arquivo chamado “alunos.txt”, no qual cada registro será composto
pelos seguintes campos: matrícula, nome, curso, nota1 e nota2.
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[100], curso[100];
    int matricula;
    float nota1,nota2;

    FILE *ap2;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Matricula: ");
    scanf("%d", &matricula);

    getchar();

    printf("Curso: ");
    fgets(curso, sizeof(curso), stdin);

    printf("Notas: ");
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2:");
        scanf("%f", &nota2);

    getchar();

    ap2 = fopen("alunos.txt", "w");

     if(ap2 == NULL){
        printf("Erro ao criar o arquivo.");
        return 1;
    }

    fprintf(ap2, "Informações alunos: ");
    fprintf(ap2, "%s, %d, %s, %.1f, %.1f\n", nome, matricula, curso, nota1, nota2);

    fclose(ap2);
}
```
