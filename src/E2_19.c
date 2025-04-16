#include<stdio.h>
//ler 10 numeros e apresentar a moda
int main (){

    int lista[10];
    int contagem [11] = {0};
    int i,max;

    for (i = 0; i < 10; i++){
        scanf("%d",&lista[i]);
        contagem[lista[i]]++;
    }

    max = 0;

    for (i = 0; i < 11; i++){
        if (contagem[i] > max){
            max = contagem[i];
        }
    }

    for (i = 0; i < 11;i++){
        if (contagem[i] == max){
            printf("\n%d",i);
        }
    }
    return 0;
}