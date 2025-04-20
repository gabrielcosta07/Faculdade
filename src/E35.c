#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, pos = -1;

    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str2[i] != '\0'; i++) {
        for (j = 0; str1[j] != '\0'; j++) {
            if (str2[i + j] != str1[j]) {
                break;
            }
        }
        if (str1[j] == '\0') {
            pos = i;
            break;
        }
    }

    printf("%d", pos);
    return 0;
}
