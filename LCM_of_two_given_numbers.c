#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int num1, int num2) {
    return (num1 * num2) / findGCD(num1, num2);
}

int main() {
    int num1, num2;

    
    scanf("%d", &num1);


    scanf("%d", &num2);

    int lcm = findLCM(num1, num2);

    printf("%d
", lcm);

    return 0;
}