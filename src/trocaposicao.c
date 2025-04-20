#include<stdio.h>

int main (){

    int vetor [20];
    int i, aux = 0, fim = 19;

    for ( i = 0; i < 20;i++){
        scanf("%d",&vetor[i]);
    }

    for ( i = 0; i < 10; i++){
        aux = vetor[i];
        vetor[i] = vetor[fim];
        vetor[fim] = aux;
        fim--;
    }

    for(i=0;i < 20;i++)
        printf("%d ",vetor[i]);

return 0;
}