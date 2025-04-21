#include<stdio.h>

int main (){
    int matriz[3][4], transposta[4][3];
    int i,j;

    for (i = 0; i <3; i++){
        for (j = 0; j <4;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4;j++){
            transposta[j][i] = matriz[i][j];
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3;j++){
            printf("%d ",transposta[i][j]);
        }
        printf("\n");
    }
}