#include<stdio.h>
//36) Faça um programa que leia uma string e apresente-a na ordem inversa, do último símbolo para o primeiro. Não use funções da biblioteca padrão.

int main (){
    char str[100];
    int tamanho,i;
    
    scanf("%s",str);

    for (tamanho = 0; str[tamanho] != '\0';tamanho++);
        
    for (i = tamanho -1; i >= 0;i--){
        printf("%c",str[i]);
    }
        printf("\n");
        
        return 0;
    }