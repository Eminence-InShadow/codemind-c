#include<stdio.h>
int main ()
{
    int x,i,sum;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    } 
     for(i=0;i<x;i+=2)
{
    sum += arr[i];
}
    printf("%d",sum);
}