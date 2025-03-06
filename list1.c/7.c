#include<stdio.h>
int main(){
    int i,n;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("o quadr
    ado dos numeros de 1 ate %d\n", n);
    for(i=1;i<=n;i++){
        if(i%2==0){
        printf("%d^2 = %d\n",i,i*i);
    
            }
    }
    
    
    return 0;
}