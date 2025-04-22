#include<stdio.h>
/*Crie um programa que:

Leia uma matriz de caracteres de dimensão 5x20 (ou seja, até 5 palavras com até 19 letras cada);

Leia uma palavra do usuário (máximo 19 caracteres);

Use ponteiros para verificar se essa palavra está presente exatamente em alguma linha da matriz;
(Não consegui usar ponteiro e fiz sem :(  )

Se encontrar, informe em qual linha ela aparece.*/

int main (){

    char str[5][20], str1[20];
    int i,j,contador;
    

    for (i = 0; i < 5;i++){
        printf("Digite uma palavra:");
        fgets(str[i],sizeof(str[i]),stdin);

        for (j = 0;str[i][j] != '\0';j++){
            if (str[i][j] == '\n'){
                str[i][j] = '\0';
                break;
            }
        }
    }

    
    fgets(str1,sizeof(str1),stdin);
    j = 0;
    
    while(str1[j] != '\0'){
        if (str1[j] == '\n')
            str1[j] = '\0';
        j++;
    }
    
    for (i = 0; i <5;i++){
        contador = 1; // ele começa ja como se fosse achar
        
        for (j = 0; str[i][j] != '\0' && str1[j] != '\0';j++ ){ // percorre as duas ate o final
            if (str[i][j] != str1[j]){ // compara se tem algo de diferente
                contador = 0; // muda se não achar a palavra
                break;
            }
        }

        if (contador && str[i][j] == str1[j]){
            printf("\nEncontrada na linha: %d",i+1);
            return 0;
        }

    }

    printf("\nPalavra não encontrada");
    return 0;
    
}