#include<stdio.h>
int main(){
int maior=-999,menor=999,i=1,n;
float m=0,soma=0;
do{
    printf("digite o numero %d ",i);
    scanf("%d",&n);
    if(n>maior){
        maior=n;
    }
    if(n<menor){
        menor=n;
    }
    soma+=n;
    i++;
}while(i<=20);

    m=soma/20.0;
printf("o maior e: %d, o menor e: %d, a media e: %f ",maior,menor,m);
return 0;
}