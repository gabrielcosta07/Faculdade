#include<stdio.h>

int main (){

    int i,num;
    printf("Digite um numero entre 1 a 100: ");
    scanf("%d",&num);

    if(num < 1 || num > 100){
        printf("Numero invalido");
    }

    for (i = 1; i <= 100; i++)
        printf("%d * %d = %d\n",num,i, num * i);
    
}