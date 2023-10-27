#include <stdio.h>

int main() {
    
    int num1, num2;

    

    scanf("%d %d", &num1, &num2);

  
    int biggest;

    if (num1 > num2) {
        biggest = num1;
    } else {
        biggest = num2;
    }

    
    printf("%d
", biggest);

    return 0;
}
