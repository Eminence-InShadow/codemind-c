#include<stdio.h>
int main () {
    int x,count=0;
    scanf("%d ",&x);
    int arr[x];
    for(int i=1;i<=x;i++)
    { 
        scanf("%d ",&arr[i]);
        count += arr[i];
    } 
    printf("%d",count);
}