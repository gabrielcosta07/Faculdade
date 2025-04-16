#include<stdio.h>

int sequencia_fibonobacci(int n) {

    if (n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else {
        return sequencia_fibonobacci (n-1) + sequencia_fibonobacci(n-2);
    }
}

int main (){
    int i;
    int j;
    printf("Digite um numero que indique ate aonde voce quer que a sequencia vá: ");
    scanf("%d",&j);
    
    for (i= 0; i <= j;i++){
        printf("Entrada:%d\n %d\n",i,sequencia_fibonobacci(i));
    }
    return 0;
}