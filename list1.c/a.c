int fatorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main (){
    int r=0,n;
for (int i=0;i<=19;i++){
    printf("digite um numero:\n");
    scanf("%d",&n);
    r=fatorial(n);
printf("o resultado do fatorial de %d e : %d\n",n,r);
}
    return 0;
}