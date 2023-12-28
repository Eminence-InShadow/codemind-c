#include<stdio.h>
int prop(int a)
{
 int i,sum=0;
 for(i=1;i<a;i++)
 {
     if(a%i==0)
     {
         sum+=i;
     }
 } return sum;
}
int main () {
    int x,y;
    scanf("%d %d",&x,&y);
    int z = prop(x);
    int c = prop(y);
    if(z==y&&c==x)
    {
        printf("Amicable");
    }
    else 
    {
        printf("Not Amicable");
    }
   
}