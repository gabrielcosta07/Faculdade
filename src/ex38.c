#include<stdio.h>
//E38) Faça um programa que leia uma String e apresente todos os prefixos da string.
int main (){

char str[100];

int tamanho = 0;
int i,j;

scanf("%s",str);

for (tamanho = 0; str[tamanho] != '\0';tamanho++);

for (i = 1; i <= tamanho;i++){
    for (j = 0; j < i;j++){
        printf("%c",str[j]);
    }
    printf("\n");
}

return 0;
}
