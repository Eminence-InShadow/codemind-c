#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    for (i = n; i >= 1; i--) {
        char ch = 'A' + i - 1;
        for (j = 0; j < n - i + 1; j++) {
            printf("%c ", ch);
        }
        printf("
");
    }
    
    return 0;
}
