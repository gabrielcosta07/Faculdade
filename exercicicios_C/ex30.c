#include <stdio.h>

int main(){
    char str[100];
    int i = 0;
    int tamanho = 0;

    fgets(str, sizeof(str), stdin);

    while(str[tamanho] != '\0'){
        if (str[tamanho] == '\n'){
            str[tamanho] = '\0';
            break;
        }
        tamanho++;
    }
tamanho = 0;
    while (str[i] != '\0'){
        tamanho++;
        i++;
    }
   
    printf("%d", tamanho);
}