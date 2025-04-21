#include<stdio.h>

int calculo_potencia(int n,int x){
    
    if ( x == 0)
        return 1;
    else
        return  n * calculo_potencia(n, x -1);
}

int main(){
int a,b;
    scanf("%d%d",&a,&b);

    printf("%d",calculo_potencia(a,b));
}