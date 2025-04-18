#include<stdio.h>

int main(){

    int lista[10];
    int i, num;

    for (i = 0; i < 10;i++){
        scanf("%d",&lista[i]);
    }
    scanf("%d",&num);

    int encontrado = 0;

    for (i = 0; i < 10;i++){
        if (lista[i] == num){
            printf("%d\n",i);
            encontrado = 1;
        }
        
    }

    if (!encontrado)
    printf("-1");

    return 0;
}