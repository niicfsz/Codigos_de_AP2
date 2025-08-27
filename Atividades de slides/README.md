# Struct em vetor

Essa atividade foi feita durante um dos slides durante as minhas aulas de AP2, o objetivo dela era fixar o conteúdo recém aprendido de struct.

## Criando struct
O intuito desse código era simplesmente cadastrar múltiplos alunos e logo em seguida printar suas informações, porém sem a necessidade de múltiplas variáveis como "nome1" "nome2" e "nome3", usando o vetor para vários alunos e a struct para várias informações;
```C
struct ficha{
    int matricula;
    char nome[100];
    float nota1, nota2;
};
```
Dessa forma, foi criado a struct do tipo "ficha", contendo a matrícula de tipo inteiro, o nome de tipo char que suporta até 100 caracteres e as notas acadêmicas de tipo float.

## Main
Após ter sido criado a estrutura com as variáveis necessárias, vai ser criado na main uma variável que é do tipo ficha(armazenando todas aquelas informacões acima) que também será um vetor que vai abrigar mais de uma variável do tipo ficha;
```C
int main(){

    struct ficha alunos[3];
    float media;

    printf("======FICHA ESTUDANTIL======\n");

    for(int i = 0; i < 3; i++){
        printf("\nDigite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);

        getchar();

        printf("\nDigite o nome completo do aluno %d: ", i+1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("\nDigite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);

        printf("\nDigite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);

        getchar();

        printf("\n============================");
    }
```
Percebe-se que criamos a variável alunos que será do tipo ficha e vetor ao mesmo tempo, em seguida, criamos um laço de repetição do tipo for que vai executar um trecho de código três vezes, registrando assim três alunos com nome, matrícula e notas diferentes;

No final do código há apenas a impressão das informações dos alunos dentro de outro laço de repetição definido.
```C

```
