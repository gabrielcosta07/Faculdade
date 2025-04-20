#include<stdio.h>
//E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.

int main (){
    int matriz [3][4];
    int i,j,ncol;

    for (i = 0; i <3;i++){
        for (j = 0; j < 4;j++)
        scanf("%d",&matriz[i][j]);
    }

    for (j = 0; j < 4;j++){
        ncol = 0;
        for (i = 0; i < 3;i++){
            ncol = ncol + matriz[i][j];
        }
    printf("%d\n",ncol);
    }

}