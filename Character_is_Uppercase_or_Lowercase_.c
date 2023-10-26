#include<stdio.h>

int main() {
    
    char ch;

    
    scanf(" %c", &ch);

    
    if ('A' <= ch && ch <= 'Z') {
        printf("uppercase alphabet
");
    }
    
    else if ('a' <= ch && ch <= 'z') {
        printf("lowercase alphabet
");
    }
    
    else {
        printf("not an alphabet
");
    }

    return 0;
}