#include<stdio.h>

int main (){
    int lista[10];
    int i,num,encontrado = 0;
    for (i = 0; i < 10;i++){
       scanf("%d",&lista[i]);
    }
    
    scanf("%d",&num);

    for (i = 0; i < 10;i++){
        if (lista[i] == num){
            printf("%d",i);
            encontrado = 1;
            break;
        } 
        
    }
    if (!encontrado) {
        return -1;    
    }
    return 0;
}