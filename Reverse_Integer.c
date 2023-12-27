#include<stdio.h>
int rev(int n)
{int sum =0;
    while(n!=0)
    { int y ;
    y=n%10;
        sum = y + sum*10;
        n/=10;
    }
    return sum;
}
int main () {
    int x;
    scanf("%d",&x);

    printf("%d",rev(x));
}