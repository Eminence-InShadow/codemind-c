#include<stdio.h>
int main ()
{
    int n,i,sum =0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d ",&arr[i]);
    }
    for(i=1;i<n;i +=2)
    {
        sum += arr[i];
    }
    printf("%d ",sum);
}