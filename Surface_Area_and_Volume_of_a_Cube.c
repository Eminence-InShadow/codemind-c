#include <stdio.h>
#include <math.h>


int main () {
    
    int s,sa,vol;
    
    scanf("%d " , &s);
    
    sa=pow(s,2)*6;
    vol=pow(s,3);
    printf("Surface area = %d and Volume = %d",sa,vol);
}