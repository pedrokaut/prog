#include<stdio.h>
int main(){
    int i,r=1,f;
    printf("digite um numero para saber seu fatorial: ");
    scanf("%d",&f);
    if(f>0){
        for(i=1;i<=f;i++){
            r*=i;
        }
        printf("%d = %d",f,r );
    }else{
        printf("n existe fatorial de numero negativo.");
    }
    return 0;
}