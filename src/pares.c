#include<stdio.h>



void posPares(int lista[],int tam){

    int i,j;
    for (i = 0; i < tam; i++){
        for (j = i+1; j < tam;j++){
            if (lista[i] == lista[j])
                printf("%d %d,",i,j);
        }
    }

}

int main(){

    int lista[] = {1,2,1,3,2,3};
    
    posPares(lista,6);

    return 0;
}