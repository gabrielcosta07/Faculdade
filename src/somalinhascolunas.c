#include<stdio.h>

int main (){
    
    int vetor[3][4],somalinhas[3],somacolunas[4];
    int l,c,soma;

    for (l = 0; l < 3;l++){
        for (c = 0; c < 4;c++)
        scanf("%d",&vetor[l][c]);
    }

    //soma linhas

    for (l = 0; l <3;l++){
        soma = 0;
        for (c = 0;c < 4;c++){
            soma += vetor[l][c];
        }
        somalinhas[l] = soma;
    }

    //soma colunas

    for (c = 0; c < 4;c++){
        soma = 0;
        for (l = 0;l <3;l++){
            soma += vetor[l][c];
        }
        somacolunas[c] = soma;
    }

    //mostrar matriz
    for (l = 0; l < 3;l++){
        for (c = 0; c < 4;c++){
        printf("%2d ",vetor[l][c]);
        }
        printf("\n");
    }


    printf("\n");

    for (l = 0; l < 3;l++){
        printf("Soma da linha %d: %2d.\n",l,somalinhas[l]);
    }

    for (c = 0; c < 4;c++){
        printf("Soma da coluna %d: %2d.\n",c,somacolunas[c]);
    }

    return 0;
}