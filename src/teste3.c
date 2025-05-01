#include<stdio.h>

int main(){
    int lista[50];
    int i,j;
    

    
    for (i = 0; i < 50;i++){
        scanf("%d",&lista[i]);
    }

    for(i = 0; i < 50;i++){
        for(j = i+1; j < 50;j++){
            if (lista[i] == lista[j]){
                printf("Numero %d se repete na posição %d e %d",lista[i], i,j);
            }
        }
        
    }
}