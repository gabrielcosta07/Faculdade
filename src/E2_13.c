#include<stdio.h>
//E2_13) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal secundária.

int main (){

    int matriz[3][3];
    int i,j;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++)
        scanf("%d",&matriz[i][j]);
    }

    for (i = 0; i <3;i++){
        printf("%d ",matriz[i][2 -i]);
        printf("\n");
    }

    return 0;

    
}