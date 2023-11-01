#include<stdio.h>
int main () {
    int x,c,i=0;
    scanf("%d",&x);
    
    while (x>0)
    {
        i++;
        x=x/10;
    } printf("%d ",i);
}