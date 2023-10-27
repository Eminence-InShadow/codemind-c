#include<stdio.h>

int main () {
     int x;
     scanf("%d",&x);
     if (x<=10000)
     printf("%.2f",x+x*0.8+x*0.2);
     else if (x<=20000)
     printf("%.2f",x+x*0.9+x*0.25);
     else if (x>20000)
     printf("%.2f",x+x*0.95+x*0.30);
}

