#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("
");
    }

    return 0;
}
