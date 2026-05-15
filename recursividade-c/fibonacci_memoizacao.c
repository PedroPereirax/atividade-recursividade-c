#include <stdio.h>
#include <stdlib.h>

// Função recursiva com memoização
int fibonacciMemo(int n, int *memo, int *chamadas) {

    (*chamadas)++;

    // Caso base
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Se já calculou anteriormente
    if (memo[n] != -1)
        return memo[n];

    // Redução do problema:
    // calcula apenas se ainda não existir
    memo[n] = fibonacciMemo(n - 1, memo, chamadas) +
              fibonacciMemo(n - 2, memo, chamadas);

    return memo[n];
}

int main() {

    int n;
    int chamadas = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Alocação dinâmica do cache
    int *memo = (int *) malloc((n + 1) * sizeof(int));

    // Inicializa o vetor
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    int resultado = fibonacciMemo(n, memo, &chamadas);

    printf("\nResultado: %d\n", resultado);
    printf("Chamadas recursivas: %d\n", chamadas);

    free(memo);

    return 0;
}