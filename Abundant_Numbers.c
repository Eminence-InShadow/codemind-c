#include<stdio.h>
int prop(int a)
{int sum=0;
    for (int i =1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
        
    } 
    if (sum>=a)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}
int main () {
    int x;
    scanf("%d",&x);
    if(prop(x))
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}