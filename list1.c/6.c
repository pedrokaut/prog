#include<stdio.h>
int main (){
    int i=1;
    printf("os multiplos de 7 entre 1 e 9999 sao:\n ");
    while( i <= 9999){
        //o comando a baixo divide o numero se o resto for 0 ele entra no contador e soma mais 7
      if(i%7==0){
        
      printf( "%4d ", i);
      }
     i++;
     

    }
    printf("\n");
    return 0;
}