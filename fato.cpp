#include <iostream>

using namespace std;

int fatorial(int n) {
    int aux = 1;
    if (n < 0) {
        cout << "Digite um n�mero v�lido" << endl;
        return -1;
    } else {
        for (int i = 1; i <= n; i++) {
            aux *= i;
        }
        return aux;
    }
}

int main() {
    int f, n;
    cout << "Digite um n�mero: ";
    cin >> n;
    
    f = fatorial(n);

    cout << "O fatorial de " << n << " � " << f << endl;
    
    return 0;
}
