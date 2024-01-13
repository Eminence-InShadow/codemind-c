#include<stdio.h>
int main () {
    int x,i,sum = 0;
    int arr[x];
    scanf("%d
",&x);
    for(i =0;i<x;i++)
    {
        scanf("%d ",&arr[i]);
        
    } 
    for(i = 0;i<x;i++)
    {  if(arr[i]%2==1)
        { sum += arr[i];
    }
    }
    printf("%d ",sum);
}