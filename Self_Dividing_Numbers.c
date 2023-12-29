#include<stdio.h>
int self(int a)
{
    int t = a;
    while(t>0)
    {
        int z = t%10;
        if(z==0 || a%z!=0)
        { return 0;
    } t/=10;
    }
    return 1;
}
int check(int a , int b)
{
    for (int i = a ; i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
int main () {
    int x,y;
    scanf("%d %d",&x,&y);
    check(x,y);
}