#include<stdio.h>

void arrendondarNotas(int notas[],int tam){

    for (int i = 0; i < tam;i++){
        if (notas[i] >= 38){
            int multiplo = ((notas[i] +4 )/ 5) * 5;
            if (multiplo - notas[i] < 3){
                notas[i] = multiplo;
            }
        }
    }
}