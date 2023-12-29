#include<stdio.h>
int checking(int a)
{
    int t,sum=0,product=1 ;
    t=a;
    while(t!=0)
    {
        int z = t%10;
        sum+=z;
        product*=z;
        t/=10;
    }
    if (sum==product)
    {
        printf("Spy Number") ;
        
    }
    else 
    {
        printf("Not Spy Number");
    } 
    return 0;
}
int main () {
    int x;
    scanf("%d",&x);
    checking(x);
}