#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int totalCards = 52;
    int minCardsToDiscard = totalCards % N;

    printf("%d
", minCardsToDiscard);
    
    return 0;
}
