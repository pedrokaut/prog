#include <stdio.h>

int main(){
    float a[5];
    float b[5];
    
    for (int i = 0; i < 5; i++){
        printf("Informe o valor real: ");
        scanf("%f", &a[i]);

        if (i == 0){
            b[i] = a[i];
        } else if (i % 2 == 0){
            b[i] = a[i]*5;
        } else{
            b[i] = a[i] + 5;
        }
    }

    for (int j = 0; j <= 4; j++){
        printf("Vetor A na posição %d: %.2f\n", j, a[j]);
        printf("Vetor B na posição %d: %.2f\n", j, b[j]);
    }
    
    return 0;
}