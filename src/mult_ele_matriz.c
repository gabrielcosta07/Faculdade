#include<stdio.h>

int main (){

    int m[3][4];
    int i,j;

    for (i = 0; i <3;i++){
        for(j = 0; j < 4;j++){
            printf("Digite um Numero: ");
            scanf("%d",&m[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4;j++){
            m[i][j] *= 5; 
            printf("%2d ",m[i][j]);
        }
    printf("\n");
    }


    printf("matriz inversa e multiplicada por 2\n");

    for (i = 2; i >= 0;i--){
        for (j = 3; j >= 0;j--){
            m[i][j] *= 2;
            printf("%3d ",m[i][j]);
        }
    printf("\n");
    }
    return 0;
}