#include<stdio.h>
//Faça um progrma que ordene um vetor

int main (){

    int vetor[10];
    int i,aux;

    for (i = 0; i < 10;i++){
        printf("Digite um valor %d: ",i);
        scanf("%d",&vetor[i]);
    }

    for (int j = 0; j < 9; j++){
        for (i = 0; i < 9-j;i++)
        if (vetor[i] > vetor[i + 1]){
            aux = vetor [i];
            vetor[i] = vetor[i+1];
            vetor[i + 1] = aux;
        }
    }

    /*
    Outra forma
    do{
    troca = 0;
     for (i = 0; i < 9-j;i++)
        if (vetor[i] > vetor[i + 1]){
            aux = vetor [i];
            vetor[i] = vetor[i+1];
            vetor[i + 1] = aux;
            troca= 1;
        }
    
    while(troca);
    }
    */

    for (i = 0; i < 10;i++){
        printf("%d ",vetor[i]);
    }
    return 0;

}