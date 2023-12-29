#include <stdio.h>
#include <math.h>
int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}
int isFibonacci(int x) {
    return isPerfectSquare(5 * x * x + 4) || isPerfectSquare(5 * x * x - 4);
}

int main() {
    int num;
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
