#include<stdio.h>
//Faça um programa que leia uma matriz de inteiros de 3x4 e apresente os elementos em que a soma dos índices i e j sejam pares. Respeite a ordem de apresentação linha,coluna.

int main (){

    int matriz[3][4];
    int i,j;

    for (i =0;i<3;i++){
        for (j=0;j<4;j++)
        scanf("%d",&matriz[i][j]);
    }

    for (i =0;i<3;i++){
        for (j=0;j<4;j++){
            if ((i + j) % 2 == 0)
            printf("%d\n",matriz[i][j]);
        }
        
    }
}