#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "ola, mundo";
    char substr[] = "mundo";  // Substring que ser� procurada

    // Verifica se a substring est� presente na string
    if (strstr(string, substr) != NULL) {
        printf("Substring '%s' encontrada: %s\n", substr, strstr(string, substr));
    } else {
        printf("Substring '%s' n�o encontrada.\n", substr);
    }

    return 0;
}
