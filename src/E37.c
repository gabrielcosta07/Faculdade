#include<stdio.h>
// 37) Faça um programa que leia uma string e apresente-a o texto de forma que inverta a caixa do texto, ou seja, imprima as letras originalmente minúsculas em maiúsculas e vice-versa.

int main() {

char str[100];
int i;

fgets(str,100,stdin);

for (i = 0; i < 100;i++){
    if (str[i] == '\0') break;
    if (str[i]>= 'A' && str[i] <= 'Z') {
        str[i]+= 32;
    }else if (str[i] >= 'a' && str[i] <= 'z'){
        str[i]-= 32;
    }
}
printf("%s",str);

return 0;

}