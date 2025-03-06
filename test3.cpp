#include <iostream>
using namespace std;

int main() {
    int *p = new int; // Aloca��o din�mica em C++

    if (!p) {
        cout << "Falha na aloca��o de mem�ria" << endl;
        return 1;
    }

    cout << "Digite um n�mero: ";
    cin >> *p; // Correto: usando *p para armazenar o valor

    cout << "Valor digitado: " << *p << endl;

    delete p; // Liberando mem�ria

    // Nova aloca��o
    p = new int;

    if (!p) {
        cout << "Falha na aloca��o de mem�ria" << endl;
        return 1;
    }

    *p = 50; // Definindo um valor fixo
    cout << "Novo valor: " << *p << endl;

    delete p; // Liberando mem�ria novamente

    return 0;
}
