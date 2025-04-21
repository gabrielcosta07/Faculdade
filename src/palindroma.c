#include<stdio.h>

int main(){

    char str[30],copia[30];
    int i=0,tam = 0,contador;

    fgets(str,30,stdin);

    while (str[i] != '\0'){
        if (str[i] == '\n')
            str[i] = '\0';
        i++;
    }


    i=0;
    while (str[i] != '\0'){
        tam++;
        i++;
    }
    for (i = 0; i < tam;i++){
        copia[i] = str[tam -1 - i];
    }
    copia[i] = '\0';


    i=0;
    tam = 0;
    while (str[i] != '\0'){
        tam++;
        i++;
    }
    contador = 0;
    for (i=0; i < tam;i++){
        if (copia[i] == str[i]){
            contador++;
        }
    }   

    if (tam == contador){
        printf("É um palindroma");
    }else {
        printf("Não é um palindroma");
    }
    return 0;
}