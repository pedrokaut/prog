#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char result;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caractere para buscar: ");
    scanf("%c", &ch);

    result = strchr(str, ch);


    if (result != NULL) {

        printf("O caractere '%c'", ch);
    } else {
        printf("O caractere '%c' não foi encontrado.\n", ch);
    }
 return 0;
}
