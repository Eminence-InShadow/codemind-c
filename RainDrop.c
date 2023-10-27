#include <stdio.h>
#include<string.h>

int main() {
    
    int number;

    
    scanf("%d", &number);

    
    char result[50] = "";

    
    if (number % 3 == 0) {
        strcat(result,"Pling");
    }
    if (number % 5 == 0) {
        strcat(result,"Plang");
    }
    if (number % 7 == 0) {
        strcat(result,"Plong");
    }

    
    if (result[0] == NULL) {
        sprintf(result, "%d", number);
    }

    
    printf("%s
", result);

    return 0;
}

