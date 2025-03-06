#include <iostream>

void alterarValor(int* ptr) {
    *ptr = 20; // Altera o valor do inteiro para o qual o ponteiro aponta
}

int main() {
    int valor = 10;
    int *ptr = &valor; // Ponteiro ptr aponta para o endere�o de valor

    std::cout << "Valor antes da fun��o: " << valor << std::endl;
    std::cout << "Endere�o de valor: " << &valor << std::endl;
    std::cout << "Conte�do do ponteiro ptr: " << ptr << std::endl;
    std::cout << "Valor apontado por ptr: " << *ptr << std::endl;

    alterarValor(ptr); // Chama a fun��o passando o ponteiro

    std::cout << "Valor ap�s a fun��o: " << valor << std::endl;
    std::cout << "Valor apontado por ptr ap�s a fun��o: " << *ptr << std::endl;

    return 0;
}