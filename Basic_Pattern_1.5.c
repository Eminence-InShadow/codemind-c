#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    for(int i =65;i<(65+x);i++)
    {
        for(int j=1;j<=x;j++)
        {
            printf("%c ",i);
        }printf("
");
    }
}