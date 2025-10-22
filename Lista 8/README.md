<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=790b11" />
  <img width="492" height="123" alt="fontbolt" src="https://github.com/user-attachments/assets/475bf015-5755-4097-80f7-904932eecea6" />
</div>

Essa seção tratará sobre o conceito de arquivos da linguagem C. No geral, pode se usar a função de arquivos para dados de texto dentro da pasta do projeto que está sendo trabalho. Por exemplo, em um sistema de login/cadastro, o FILE pode ser utilizado para registrar nomes de usuários e senhas para que não necessite de cadastrá-las sempre que compilar o programa.

A sintaxe desse artefato funciona assim:
```C
FILE *arq;

arq = fopen("(diretório)\\nomedoArquivo.txt", "tipodeAbertura");

fclose(fclose);
```
É determinado uma variável FILE, que irá representar o arquivo.txt dentro do código, onde operações de impressão, leitura  e etc. serão representados por esse ponteiro de FILE. Na função fopen, é possível observar a existência de um tipo de abertura, essa especificidade de abertura da variável serve para dividir qual ação será feita, cada ação é definida por um caractere, como na tabela abaixo:


| Tipo de abertura | Ação |
| ---------------- | ---- |
| r (read) | Leitura do arquivo. |
| w (write) | Criação do arquivo/Escrever no arquivo. |
| a (append) | Incrementar dados no final do arquivo. |
| r+ | Lê e escreve no início do arquivo, não sobrepondo o que já existe. |
| w+ | Lê e escreve no início do arquivo, sobrepondo tudo que já existe. |
| a+ | Lê e incrementa dados no final do arquivo. |
| rb | Leitura de arquivo binário. |
| wb | Criação do arquivo/Escrever no arquivo binário. |
| ab | Incremento de dados no final do arquivo binário. |
| rb+ | Lê e escreve no início do arquivo binário, não sobrepondo o que já existe. |
| wb+ | Lê e escreve no início do arquivo binário, sobrepondo o que já existe. |
| ab+ | Lê e incrementa dados no final do arquivo binário. |

