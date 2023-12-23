#include<stdio.h>

int main()
{
    int t ; 
    scanf("%d",&t);
    while (t--) {
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=b-c;
    if (d<=a) {
    printf("NO
");
    }
    else {
    printf("YES
");
    }
    }
}