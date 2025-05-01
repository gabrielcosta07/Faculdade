#include <stdio.h>

int main (){
    int x = {123424617},com,cont= 0;
    int d [10] = {0};    

    while( x > 0){
        com = x % 10;
        d[com] += 1;
        x/=10;
        cont++;
    }

    for (int i = 0; i <10;i++){
        if (d[i] > 0)
        printf("%d ",d[i]);
    }

    return 0;
}