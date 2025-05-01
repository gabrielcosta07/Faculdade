#include <stdio.h>

void doisnum(int lista[][2], int l, int c, int num) {
    int i, j;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c - 1; j++) {  // <- aqui o ajuste importante
            if (lista[i][j] + lista[i][j + 1] == num) {
                printf("%d %d\n", i, j);
            }
        }
    }
}

int main() {
    int matriz[2][2] = {
        {2, 7},
        {11, 15}
    };

    int linhas = 2;
    int colunas = 2;
    int numero = 9;

    doisnum(matriz, linhas, colunas, numero);

    return 0;
}
