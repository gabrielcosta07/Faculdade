#include<stdio.h>

int main (){
    int matriz1[3][4],matriz2[3][4],matrizsoma[3][4];
    int i,j;

    for (i = 0; i < 3;i++){
        for (j=0;j < 4;j++){
            scanf("%d",&matriz1[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        for (j=0;j < 4;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        for (j=0;j < 4;j++){
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (i = 0; i < 3;i++){
        for (j=0;j < 4;j++){
            printf("%2d ", matrizsoma[i][j]);
        }
        printf("\n");
    }

    return 0;

}