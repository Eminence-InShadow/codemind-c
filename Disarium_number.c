#include<stdio.h>
#include<math.h>
int count_ofdigits(int x)
{  int count =0;
    while(x>0)
    {
        x/=10;
        count++;
    }
    return count; 
}
int disarium(int x)
{
    int value=0;
    int temp=x;
    int y,n=count_ofdigits(x);
    while(temp>0)
    {
        y=temp%10;
        value+=pow(y,n);
        n--;
        temp/=10;
    }
return (value==x);
    
}

int main () {
    int x,c=0,temp=x; 
    scanf("%d",&x);
  
    if(disarium(x)){
    printf("True");
    }
else 
{
    printf("False");
}
}