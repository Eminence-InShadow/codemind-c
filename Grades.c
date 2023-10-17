#include<stdio.h>

int main () {
    int p,c,b,m,cs,f;
    float g;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&cs);
    f=(p+c+b+m+cs)*100;
    g=f/500;
    
    if (g>=90.00)
    printf("Grade A");
    if (g>=80.00&&g<90.00)
    printf("Grade B");
    if (g>=70.00&&g<80.00)
    printf("Grade C");
    if (g>=60.00&&g<70.00)
    printf("Grade D");
    if (g>=40.00&&g<60.00)
    printf("Grade E");
    if (g<40.00)
    printf("Grade F");
    
}