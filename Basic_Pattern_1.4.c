#include<stdio.h>
int main() {
  int x;
  scanf("%d",&x);
 for(int i=1;i<=x;i++)
 { for(int j=65;j<(65+x);j++)
 {
     printf("%c ",j);
 }
   printf("
"); 
     
 }
}