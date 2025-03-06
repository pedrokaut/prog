#include <stdio.h>
int main(){
    float luz,agua,net,feira;
    printf("digite a conta de luz: ");
    scanf("%f",&luz);
    printf("digite a conta de agua: ");
    scanf("%f",&agua);
    printf("digite a conta de Internet: ");
    scanf("%f",&net);
    printf("digite a conta da feira: ");
    scanf("%f",&feira);
    float resultado=luz+agua+net+feira;
    printf("o resultado foi :%.2f", resultado);
    return 0;
}