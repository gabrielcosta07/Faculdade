#include <stdio.h>
//E31) Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada, concatene o conteúdo da String B na string A e apresente o conteúdo da String A. Não deverá fazer uso da função strcat ou strcpy.
int main()
{
    char str1[100];
    char str2[100];
    
    int i = 0;
    
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    
    for (i = 0; i <= 100;i++){
        if (str1[i+2] == '\0')
            break;
        printf("%c",str1[i]);
    }
    
    for (i = 0; i <= 100;i++){
        if (str2[i] == '\0')
            break;
        printf("%c",str2[i]);
    }
    
    return 0;
}