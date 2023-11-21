#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c;
    scanf("%d %d",&a,&b);
    for(c=a+1;c<b;c++)
    {
        printf("%d %d %d
",c,c*c,c*c*c);
}
}