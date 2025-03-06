#include<stdio.h>
int main(){
int i;
double c=1,total=0;

for(i=1;i<=30;i++){
total+=c;
c*=2;

}
 printf("Total em centavos: %.0lf\n", total);
printf("Convertendo para reais: %.2lf\n", total / 100);
return 0;
}
