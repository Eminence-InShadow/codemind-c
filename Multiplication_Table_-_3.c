#include<stdio.h>

int main () {
    int c,x,s;
    scanf("%d %d %d",&c,&x,&s);
    for(x;x<=s;x++)
    {
        printf("%d x %d = %d
",c,x,x*c);
    }
}