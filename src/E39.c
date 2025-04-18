#include<stdio.h>
//E38) Faça um programa que leia uma String e apresente todos os prefixos da string.
int main (){

char str[100];

int tamanho = 0;
int i,j;

fgets(str,sizeof(str),stdin);

while (str[tamanho] != '\0' && str[tamanho]!= '\n'){
    tamanho++;
}

for (i = 0; i < tamanho;i++){
    printf("%s",&str[i]);
}
return 0;
}
