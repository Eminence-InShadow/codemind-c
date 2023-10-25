#include<stdio.h>
int main () {
    int x,y,z,c;
    scanf("%d %d %d %d",&x,&y,&z,&c);
    (x+y+z+c)>=40&&x>=10&&y>=10&&z>=10&&c>=10?printf("YES"):printf("NO");
    
}