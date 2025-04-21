#include<stdio.h>
//E2_12) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.

int main (){

    int lista[4][4];
    int i,j;

    for (i = 0; i < 4;i++){
        for (j = 0; j < 4; j++){
            scanf("%d",&lista[i][j]);
        }   
    }
    for (i = 0; i < 4;i++){
        for (j = 0; j < 4; j++){
            printf("%2d ",lista[i][j]);
        }   
        printf("\n");
    }

    for (i = 1; i < 4;i++){
        for (j = 0; j < 4; j++){
            if (lista[i] > lista[j])
                printf("%d\n",lista[i][j]);
        }   
    }

     return 0;
    
}
