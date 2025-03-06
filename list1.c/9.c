#include<stdio.h>
int multiplicador(int a , int b, int c){
    float m=(a,b,c)/3;
    return m;

}
int main(){
   int a,b,c;
   int r;
   scanf("%f%f%f",&a,&b,&c);
   r=multiplicador(a,b,c);
   printf("o resultado e : %.f2",r);
     return 0;
}