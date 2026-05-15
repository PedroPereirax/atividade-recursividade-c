#include <stdio.h>

// Função recursiva das Torres de Hanoi
void hanoi(int n, char origem, char destino, char auxiliar, int *movimentos) {

    // Caso base:
    // quando existir apenas 1 disco
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        (*movimentos)++;
        return;
    }

    // Redução do problema:
    // move n-1 discos para a torre auxiliar
    hanoi(n - 1, origem, auxiliar, destino, movimentos);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    (*movimentos)++;

    hanoi(n - 1, auxiliar, destino, origem, movimentos);
}

int main() {

    int n;
    int movimentos = 0;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &n);

    printf("\n");

    hanoi(n, 'A', 'C', 'B', &movimentos);

    printf("\nTotal de movimentos: %d\n", movimentos);

    return 0;
}