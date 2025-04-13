#include<stdio.h>

int main (){

char str[100];

int tamanho = 0;
int i,j;

fgets(str,sizeof(str),stdin);

while (str[tamanho] != '\0' && str[tamanho]!= '\n'){
    tamanho++;
}

for (i = 1; i <= tamanho;i++){
    for (j = 0; j < i;j++){
        printf("%c",str[j]);
    }
    printf("\n");
}

return 0;
}
