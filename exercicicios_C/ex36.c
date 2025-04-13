#include<stdio.h>

int main (){
char str[100];
int tamanho,i;

fgets(str,sizeof(str),stdin);

while (str[tamanho] != '\0' && str[tamanho] != '\n'){
    tamanho++;
}

for (i = tamanho -1; i >= 0;i--){
    printf("%c",str[i]);
}

return 0;

}