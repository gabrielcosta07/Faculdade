#include<stdio.h>

int main (){

    int a,b,soma;

    printf("Digite um valor: ");
    scanf("%d",&a);

    do {
        printf("Digite outro valor maior que o primeiro: ");
        scanf("%d",&b);
    }while(b < a);

    for (int i = a; i <= b; i++){
        soma += i;
    }

    printf("A soma dos números de %d até %d é: %d\n", a,b,soma);
    return 0;
}

