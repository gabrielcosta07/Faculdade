#include<stdio.h>

/*void descobrir(int vet[],int *me,int *ma,int tam){

    int i;
    *me = vet [0];
    *ma = vet[0];
    for(i = 0; i < tam;i++){
        if (vet[i] < *me)
            *me = vet[i];
        if (vet[i] > *ma)
            *ma = vet[i]; 
    }
}

int main(){

    int menor,maior,vet[] = {10,20,30,40,50};
    int *p;

    descobrir(vet,&menor,&maior,5);
    printf("Menor: %d\tMaior: %d",menor,maior);

    return 0;
}*/

void dobrar(int *x){
    *x = (*x) * 2;
}
int main(){
    int valor;

    scanf("%d",&valor);

    dobrar(&valor);

    printf("%d",valor);

    return 0;
    
}