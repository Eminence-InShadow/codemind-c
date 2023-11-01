#include<stdio.h>

int main () {
    int x,y,z=0;
    scanf("%d ",&x);
    
    while (x>0)
    {
        y=x%10;
        z +=y;
        x=x/10;
        
    }printf("%d",z);
    
}