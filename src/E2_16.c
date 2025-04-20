#include<stdio.h>
//Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.

int main(){
    int vetor[10];
    int i,a,b,aux;

    for (i = 0; i < 10;i++){
        scanf("%d",&vetor[i]);
    }

    scanf("%d%d",&a,&b);

   if (a > b){
    aux = a;
    a = b;
    b = aux;
   }

   for (i = a; i <= b;i++){
        printf("%d\n",vetor[i]);
   }
}