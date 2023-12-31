#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;


    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return (originalNum == reversedNum);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
