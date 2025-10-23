4- Faça um programa para incluir alunos no arquivo criado no Exercício 3, lembrando que não podem
existir dois alunos com o mesmo número de matrícula.

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define MAX_CURSO 100

int matriculaExiste(FILE *ap2, int matricula) {
    char nome[MAX_NOME], curso[MAX_CURSO];
    int matriculaArquivo;
    float nota1, nota2;

    fseek(ap2, 0, SEEK_SET);
    while (fscanf(ap2, "%99[^,], %d, %99[^,], %f, %f\n", nome, &matriculaArquivo, curso, &nota1, &nota2) != EOF) {
        if (matricula == matriculaArquivo) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char nome[MAX_NOME], curso[MAX_CURSO];
    int matricula;
    float nota1, nota2;

    FILE *ap2;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Matricula: ");
    scanf("%d", &matricula);

    getchar();

    printf("Curso: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = 0;

    printf("Notas: ");
    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    getchar();

    ap2 = fopen("alunos.txt", "a+");
    if (ap2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (matriculaExiste(ap2, matricula)) {
        printf("Erro: Matricula %d ja existe. Nao eh possível incluir o aluno.\n", matricula);
        fclose(ap2);
        return 1;
    }

    fprintf(ap2, "%s, %d, %s, %.1f, %.1f\n", nome, matricula, curso, nota1, nota2);

    fclose(ap2);

    printf("Dados salvos no arquivo 'alunos.txt' com sucesso!\n");

    return 0;
}
```
Esse código utiliza uma função que é muito utilizada em programas em C que utilizam armazenamento de dados, chamada "fseek" e "fscanf". No programa, essas funções procuram se já existe uma mesma matrícula no arquivo.

## fseek
O fseek é o responsável pelo reposicionamento do ponteiro de leitura no arquivo, movendo do início ao fim do arquivo.
```C
fseek(PtrDoArquivo, 0, iniciodaleitura);
//em "iniciodaleitura" geralmente utilizamos SEEK_SET pois ele representa o inicio do arquivo 
```

## fscanf
O fscanf é o responsável pela identificação das variáveis dentro do arquivo, sua sintaxe varia de acordo com a necessidade.
```C
fscanf(PtrDoArquivo, tipoDaVariavel nomeDaVariavel);
```
