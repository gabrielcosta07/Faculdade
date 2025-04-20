#include<stdio.h>
//Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.
int meuabs(int num){
    if (num < 0){
        return -num;
    }else{
        return num;
    }
}

int main (){

    int lista[10];
    int i,com;

    for (i=0;i<10;i++){
        scanf("%d",&lista[i]);
    }

    for (i=0;i<9;i++){
        if (meuabs(lista[i] - lista[i+1]) <= 1){
            printf("%d %d\n",lista[i],lista[i+1]);
        }
        
    }
}