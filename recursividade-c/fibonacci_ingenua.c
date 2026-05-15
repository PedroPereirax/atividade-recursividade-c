#include <stdio.h>

// Função recursiva para calcular Fibonacci
int fibonacci(int n, int *chamadas) {

    (*chamadas)++;

    // Caso base:
    // quando n for 0 ou 1
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Redução do problema:
    // divide em fibonacci(n-1) e fibonacci(n-2)
    return fibonacci(n - 1, chamadas) +
           fibonacci(n - 2, chamadas);
}

int main() {

    int n;
    int chamadas = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n, &chamadas);

    printf("\nResultado: %d\n", resultado);
    printf("Chamadas recursivas: %d\n", chamadas);

    return 0;
}