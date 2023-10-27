#include<stdio.h>

int main () {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a+b>c&&b+c>a&&c+a>b?printf("Valid triangle"):printf("Invalid triangle");
    
}