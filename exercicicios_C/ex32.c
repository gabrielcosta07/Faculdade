#include<stdio.h>

void tranformar_minusculo(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
}


int main(){
    char str1[100];
    char str2[100];
    int i;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    tranformar_minusculo(str1);
    tranformar_minusculo(str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if (str1[i] < str2[i]){
        printf("-1\n");
        return 0;
    }
        
        if (str1[i] > str2[i]){
        printf("1\n"); 
        return 0;
    }
}

    if (str1[i] == '\0' && str2[i] == '\0'){
        printf("0\n");
    }else if (str1[i] == '\0'){
        printf("-1\n");
    }else
        printf("1\n");

        return 0;
}
   
    