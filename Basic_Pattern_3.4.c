#include <stdio.h>

int main() {
    int N, i, j;
    char ch;
    scanf("%d", &N);
    
    for(i = N; i >= 1; i--) {
        ch = 'A' + i - 1;
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("
");
    }
    
    return 0;
}
