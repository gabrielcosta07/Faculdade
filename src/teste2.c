#include <stdio.h>

int main(){

    float temp[] = {23.6, 37.9, 25.1, 19.0, 29.8};
    int i;
    float menor = temp[0],maior = temp[0],media = 0;

    for (i = 1; i < 5;i++){
        if (temp[i] < menor){
            menor = temp[i];
        }   
    }
    for (i = 1; i < 5;i++){
        if (temp[i] > maior){
            maior = temp[i];
        }   
    }

    for (i = 0; i < 5; i++){
        media += temp[i];
    }
    media = media / 5;

    printf("Menor: %.1f\n", menor);
    printf("Maior: %.1f\n", maior);
    printf("Média: %.1f\n", media);

    return 0;


}