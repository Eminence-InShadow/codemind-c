#include<stdio.h>
int main() {
    int x,i;
    scanf("%d",&x);
    int arr[x];
    for( i=0;i<x;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int max=arr[0];
    for (i=1;i<x;i++){
       
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d ",max);
}