#include<stdio.h>
int largest(int a)
{ int k=1;
    while(a!=0)
    {
      int c = a%10;
      a/=10;
      if (c>k)
      {
          k=c;
      }
    } return k;
}
int main () {
    int x;
    scanf("%d",&x);
    printf("%d",largest(x));
}