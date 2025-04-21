#include<stdio.h>

int fatorial(int n){

    if (n == 0 || n == 1)
        return 1;
    else{
        return n * fatorial(n-1);
    }
}

int main(){

    int a;

    scanf("%d",&a);

    printf("%d", fatorial(a));

    return 0;
}