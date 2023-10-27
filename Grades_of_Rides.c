#include <stdio.h>

int main() {
    
    int hurl_factor, spin_factor, speed_factor;
    scanf("%d %d %d", &hurl_factor, &spin_factor, &speed_factor);

    
    int grade;
    if (hurl_factor > 50 && spin_factor > 60 && speed_factor > 100) {
        grade = 10;
    } else if (hurl_factor > 50 && spin_factor > 60) {
        grade = 9;
    } else if (spin_factor > 60 && speed_factor > 100) {
        grade = 8;
    } else if (hurl_factor > 50 && speed_factor > 100) {
        grade = 7;
    } else if (hurl_factor > 50 || spin_factor > 60 || speed_factor > 100) {
        grade = 6;
    } else {
        grade = 5;
    }

    
    printf("%d
", grade);

    return 0;
}
