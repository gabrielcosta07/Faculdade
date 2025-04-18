#include<stdio.h>
//E2_12) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal principal.

int main (){

    int lista[3][3];
    int i,j;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3; j++){
            scanf("%d",&lista[i][j]);
        }   
    }

    //Uma opção
    //for (i = 0; i < 3;i++){
    //printf("%d\n",lista[i][i]);
    //}

    //outra opção
    for (i = 0; i < 3;i++){
        for (j = 0; j < 3; j++){
            if (lista[i] == lista[j]){
                printf("%d\n",lista[i][j]);
            }
        }   
    }

     return 0;
    
}
