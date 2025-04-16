#include <stdio.h>
//E35) Faça um programa que leia duas strings (A e B) e indique a posição que ocorre A em B, caso contrário, quando A não ocorrer em B, o programa deverá apresentar o valor -1. Não use as funções da string.h.
void remover_quebra_linha(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int tamanho_string (char str[]) {
    int tam = 0;
    while (str[tam] != '\0' && str[tam] != '\n') { 
        tam++;
    }
    return tam;
}

int procurar_string(char str1[], char str2[]) {
    int i, j, k;
    int len1 = tamanho_string(str1); 
    int len2 = tamanho_string(str2);

    for (i = 0; i <= len1 - len2; i++) {
        k = i;
        j = 0;

        while (j < len2) {
            char c1 = str1[k];
            char c2 = str2[j];

            if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
            if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

            if (c1 == c2) {
                k++;
                j++;
            } else {
                break;
            }
        }

        if (j == len2) return i; 
    }

    return -1;
}

int main() {
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    remover_quebra_linha(str1);
    remover_quebra_linha(str2);
 
    int pos = procurar_string(str1, str2);

    printf("%d\n", pos);

    return 0;
}