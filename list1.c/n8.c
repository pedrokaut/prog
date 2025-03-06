#include<stdio.h>
int main(){
    int i,maior=-999,menor=999,v;
    float m=0,soma=0;
    for(i=1;i<=10;i++){
        printf("digite o numero %d:",i);
        scanf("%d",&v);
        if(v>maior){
            maior=v;
        }
        if(v<menor){
            menor=v;
        }
        soma+=v;
    }
    m=soma/10.0;
    printf("o maior: %d\n o menor: %d\n a media: %.2f\n",maior,menor,m);
    return 0;
}