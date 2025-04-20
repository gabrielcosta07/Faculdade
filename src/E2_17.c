#include<stdio.h>
//Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.

int main (){
    int vetor[10];
    int i,aux;
    
    for (i = 0; i < 10;i++){
        scanf("%d",&vetor[i]);
    }

    for (i= 0; i < 9;i++){
        for (int j = 0; j < 9-i;j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for (i=9;i >=0;i--){
        printf("%d\n",vetor[i]);
    }
}
