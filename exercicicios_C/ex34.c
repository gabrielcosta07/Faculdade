#include<stdio.h>
//34) Faça um programa que leia uma String (com até 100 símbolos) e leia um símbolo. O programa deverá procurar a ocorrência do símbolo na String. Se o símbolo não for encontrado o programa deverá apresentar -1, caso contrário, deverá apresentar o índice do vetor que ocorre a primeira ocorrência do símbolo. Não poderar fazer uso das funções da biblioteca padrão iniciadas com str ou mem...
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