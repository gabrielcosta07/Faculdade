#include<stdio.h>

int main (){

    char str[40],copia[40];
    int i,tam,contador,j=0;


    fgets(str,sizeof(str),stdin);

    //Tirar o \n
    i =0;
    tam = 0;
    while(str[i] != '\0'){
        if (str[i] == '\n')
        str[i] = '\0';
    i++;
    }

    i =0;
    tam = 0;

    while(str[i] != '\0'){
        tam++;
        i++;
    }

    for (i= 0; i < tam;i++){
        if (str[i] != '!' && str[i] != '?' && str[i] != ' ' && str[i] != '.' && str[i] != ','){
            copia[j++] = str[i];
        }
    }
    copia[j] = '\0';
   
    j =0;
    tam = 0;

    while(copia[j] != '\0'){
        tam++;
        j++;
    }
    contador = 0;
    for (j = 0; j < tam;j++){
        if (copia[j] != copia[tam -1 -j])
            contador++;
    }

    if (contador == 0){
        printf("É um palindroma");
    }else {
        printf("Não é um palindroma");
    }
    return 0;

}