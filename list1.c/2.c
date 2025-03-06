#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "abacate";
    char ptr = strstr(texto, "cate");

    // Verifica se a substring foi encontrada
    if (ptr != NULL) {
        printf("%s\n", ptr); // Usar %s para imprimir strings
    } else {
        printf("Substring não encontrada.\n");
    }
    
    return 0;
}
