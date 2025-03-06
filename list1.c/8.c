#include<stdio.h>
int main(){
float n1=0,n2=0,n3;
int op;
printf("digite a operacao desejada: \n");

printf("1-somar\n");
printf("2-subtrair\n");
printf("3-multiplicar\n");
printf("4-dividir\n");
printf("0-sair\n");
printf("digite digite a opcao desejada: ");
scanf("%i",&op);
switch (op){
case 1:
    printf("digite dois numeros: ");
    scanf("%f%f",&n1,&n2);
    n3=n1+n2;
    printf("%.1f+%.1f=%.1f", n1,n2,n3);
     break;
     case 2:
     printf("digite dois numeros: ");
     scanf("%f %f",&n1,&n2);
     n3=(n1-n2);
     printf("%.1f-%.1f=%.1f", n1,n2,n3);
     break;
      case 3:
            printf("Digite dois números: ");
            scanf("%f %f", &n1, &n2);
            n3 = n1 * n2;
            printf("%.1f * %.1f = %.1f\n", n1, n2, n3);
            break;

        case 4:
            printf("Digite dois números: ");
            scanf("%f %f", &n1, &n2);
            if (n2 != 0) {
                n3 = n1 / n2;
                printf("%.1f / %.1f = %.1f\n", n1, n2, n3);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
}
}