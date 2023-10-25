#include<stdio.h>

int main () {
    int x;
    scanf("%d",&x);
    x<3?printf("LIGHT"):x>=3&&x<7?printf("MODERATE"):printf("HEAVY");

}