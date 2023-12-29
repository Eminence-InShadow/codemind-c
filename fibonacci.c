#include<stdio.h>
int main() { 
    int x,z=0,y=1,next;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
      if(i<=1)
      {
          next=i;
    }
    else 
    {
        next = z+y;
        z = y;
        y = next;
    } 
    printf("%d ",next);
  
}
return 0;
}