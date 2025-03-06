#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    float n1,n2,m;
    do{
        printf("digite a primeira nota: ");
        scanf("%f",&n1);
    }while(n1>=10 && n1<0);
    do{
        printf("digite a segunda nota: ");
        scanf("%f",&n2);
    }while(n2>=10 && n2<0);
    m=n1+n2;
    printf("a media das avaliações é :%.1f",m/2);
    return 0;
   
}