#include<stdio.h>
int main () {
    int y,count=0;
    scanf("%d", &y);
    while(y!=0)
    {
        int z = y%10;
        count = count*10 + z;
        y /=10;
        
    }
    printf("%d",count);
        
}