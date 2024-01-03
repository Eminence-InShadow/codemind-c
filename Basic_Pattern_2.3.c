#include<stdio.h>
int main () {
    int x,i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=65;j<i+65;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
    return 0;
}