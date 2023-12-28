#include<stdio.h>
int rev(int a)
{ int sum=0,d,g;
    while(a!=0)
    { d=a%10;
      sum =d +sum*10;
      a/=10;
    }
    return sum;
}
int main () {
    int x;
    scanf("%d",&x);
    printf("%d",rev(x));
}