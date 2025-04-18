#include<stdio.h>
//Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.

int main (){

    int lista[10];
    int i,num = 0;

    for (i = 0; i < 10;i++){
        scanf("%d",&lista[i]);   
    }

    for (i = 0; i < 10;i++){
        if (lista[i] % 2 == 0){
            num = i;
            printf("%d\n",num);
        }
    }
    return 0;
}