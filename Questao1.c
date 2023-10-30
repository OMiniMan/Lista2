#include <stdio.h>

int main() {
    int num[10], soma[9], linha = 10;

    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &num[i]) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < linha; i++) {
        printf("%d", num[i]);
        if (i < linha - 1) {
            printf(" ");
        }
    }
    printf("\n");

    while (linha > 1) {
        for (int i = 0; i < linha - 1; i++) {
            soma[i] = num[i] + num[i + 1];
        }

        for (int i = 0; i < linha - 1; i++) {
            printf("%d", soma[i]);
            if (i < linha - 2) {
                printf(" ");
            }
        }
        printf("\n");

        linha--;

        for (int i = 0; i < linha; i++) {
            num[i] = soma[i];
        }
    }

    return 0;
}
