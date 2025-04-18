#include <stdio.h>

int main() {
    int i;
    float f;
    char str[30];
    char a;

    scanf("%d", &i);
    printf("%d\n", i);

    while (getchar() != '\n'); 
    a = getchar();
    printf("%d %c\n", a, a);


    scanf("%f", &f);
    printf("%.2f\n", f);

    while (getchar() != '\n');
    fgets(str, sizeof(str), stdin);
    printf("%s", str);

    return 0;
}