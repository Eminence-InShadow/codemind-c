#include<stdio.h>
#include<math.h>
int even(int arr[],int n)
{ int sum=0;

    for (int i = 0 ; i<n ;i++) 
    {
       if (arr[i]%2==0)
       {
           sum +=arr[i];
       }
      
       
    }
    return sum;
}
    
int odd(int arr[],int n)
{ int sum =0;
    for (int i = 0 ; i<n;i++)
    {
        if (arr[i]%2==1)
        {
            sum+=arr[i];
        }
    }
    return sum;
}

int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int diff=abs(even(arr,n)-odd(arr,n));
    printf("%d",diff);
    
}