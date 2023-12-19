#include<stdio.h>
int main () {
    int x,i;
    float count=0;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<x;i++)
{
    count +=arr[i];
}
    
    printf("%.2f",count/x);
}