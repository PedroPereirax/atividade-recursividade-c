Atividade Avaliativa 1 - Recursividade em C

Esta atividade tem como objetivo praticar recursividade na linguagem C utilizando certos problemas.

Foram desenvolvidos os seguintes exercícios:

- Fibonacci recursivo sem otimização
- Fibonacci com memoização
- Torres de Hanoi

---

1. Fibonacci sem otimização

Nesse exercício foi utilizada recursividade simples para calcular a sequência de Fibonacci.

A função realiza várias chamadas repetidas, mostrando a ineficiência da abordagem ingênua.

Também foi utilizado um contador para mostrar a quantidade de chamadas recursivas.

Caso base

- n == 0
- n == 1

---

2. Fibonacci com memoização

Nesse exercício foi utilizada memoização para melhorar o desempenho da solução anterior.

Os valores já calculados são armazenados em memória utilizando alocação dinâmica com malloc, evitando cálculos repetidos.

Caso base

- n == 0
- n == 1

---

3. Torres de Hanoi

Nesse exercício foi implementada a solução recursiva das Torres de Hanoi.

O programa mostra os movimentos realizados e a quantidade total de movimentos.

---

Caso base

- quando existe apenas 1 disco

---

Linguagem utilizada

- C

---

Como compilar

```bash
gcc fibonacci_ingenua.c -o fib1

gcc fibonacci_memoizacao.c -o fib2

gcc hanoi.c -o hanoi