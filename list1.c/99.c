#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int fat;

    // Entrada dos valores para o vetor v1 e c�lculo dos fatoriais
    for (int i = 0; i < 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &v1[i]);

        // Copia o valor de v1 para v2
        v2[i] = v1[i];

        // Reinicia a vari�vel fat para 1
        fat = 1;

        // C�lculo do fatorial
        for (int j = 1; j <= v1[i]; j++) {
            fat *= j;
        }

        // Armazena o fatorial calculado em v2
        v2[i] = fat;
    }

    // Exibindo o vetor v1 (n�meros digitados)
    printf("\nVetor v1 (n�meros originais):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v1[i]);
    }

    // Exibindo o vetor v2 (fatoriais)
    printf("\n\nVetor v2 (fatoriais):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}
