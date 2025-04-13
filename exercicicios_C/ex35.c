#include<stdio.h>

int main(){

    char str[100];
    int i;
    char simbolo;
    int encontrou = 0;

    fgets (str, sizeof(str), stdin);
    scanf("%c", &simbolo);

    for ( i =0; str[i] != '\0';i++){
        if (str[i] == '\n'){
            break;
        }
        if (str[i] == simbolo){
            printf("%d\n", i);
            encontrou = 1;
            break;
        }
    }

    if (!encontrou){
        printf("-1\n");
    }

    return 0;
}