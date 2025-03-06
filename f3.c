#include <stdio.h>

// Fun��o que calcula a �rea do c�rculo
double calculaAreaCirculo(double raio) {
    double pi = 3.14159; // Defini��o da constante pi dentro da fun��o
    return pi * raio * raio; // Multiplica o raio por ele mesmo
}

int main() {
    double raio;
    printf("Digite o valor do raio do c�rculo: ");
    scanf("%lf", &raio); // Leitura de um valor double para o raio

    double area = calculaAreaCirculo(raio); // Chamada da fun��o
    printf("A �rea do c�rculo �: %.2lf\n", area); // Exibe a �rea com 2 casas decimais

    return 0;
}
