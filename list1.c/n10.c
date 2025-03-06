#include<stdio.h>
int main(){
    int i=1,maior,n;
    while(i<=10){
        printf("digite a %d idade: ",i);
        scanf("%d",&n);
        if(n>=18){
            maior+=1;
        }
        i++;
    }
    printf("o numero de pessoas maiores de idade e:%d",maior);
    return 0;
}