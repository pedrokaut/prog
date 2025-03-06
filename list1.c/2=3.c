#include<stdio.h>
int main(){
    int soma=0,i,nimpar;

for(i=1;i<=500;i++){
    
        //esse nimpar e necessario pq a soma vai receber os valores dele, que seria o i que sai do laço de repetiçao multiplicado por dois para satisfazer a pergunta,

        nimpar=2*i-1;
        printf("quantidade de numero impar: %d\n",nimpar);
     //esse -1 serve para poder imprimir desde o começo, pra n quebar a logica  
        soma+=nimpar;
        printf(" soma acumulada ate agora: %d\n", soma);
    }
printf("==========================================\n");
printf("soma total dos numeros impares: %d", soma);

    return 0;
}