#include <stdio.h>


void checkNeonNumber(int num) {
    int square = num * num;
    int sum = 0;

    
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

   
    if (sum == num) {
        printf("Neon Number
");
    } else {
        printf("Not Neon Number
");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    checkNeonNumber(N);

    return 0;
}