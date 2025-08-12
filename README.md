# Desafio de Xadrez

Este projeto de Xadrez simula o jogo em três níveis de dificuldade usando a linguagem C, estruturas de repetição e funções recursivas.

---

## Níveis de Implementação

### 🏅 Nível Novato
O desafio inicial foca em loops básicos. As movimentações do Bispo, Torre e Rainha são simuladas usando estruturas de repetição. As constantes são utilizadas para definir o número de casas que cada peça se move.

### 🏅 Nível Aventureiro
Este nível explora o uso de loops aninhados. A movimentação do Cavalo em formato de "L" (para baixo e para a esquerda) é implementada utilizando uma combinação de loops `for` e `while`.

### 🏅 Nível Mestre
O desafio final eleva a complexidade. As movimentações da Torre e da Rainha são refeitas usando funções recursivas. A movimentação do Bispo também usa recursão, mas combinada com loops aninhados. O Cavalo se move uma vez, usando um loop com múltiplas condições e a instrução `break` para finalizar a execução.

---

### Como Rodar o Projeto

1.  No arquivo `main.c`, **descomente o bloco de código do Nível** que você deseja executar e certifique-se de que os outros níveis estão com `/*` e `*/`.
2.  Abra o terminal na pasta do projeto no VS Code.
3.  Use o comando `gcc` para compilar o código:
    ```bash
    gcc main.c -o xadrez
    ```
4.  Execute o programa compilado:
    ```bash
    .\xadrez.exe

    ```
