#include<stdio.h>
int main(){
    int f,r=1;
    printf("digite um numero: ");
    scanf("%d",&f);
    if(f<0){
        printf(" nao existe fatorial de numero negativo: ");

    }else{
    while(f>0){
        r*=f;
        f--; 
        }

    printf("%d",r);
    }
    return 0;
}
