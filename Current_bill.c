#include <stdio.h>

int main() {
    // Declare variables
    int units;
    float charge, surcharge, totalAmount;


    scanf("%d", &units);

    
    if (units <= 199) {
        charge = units * 1.20;
    } else if (units >= 200 && units < 400) {
        charge = units * 1.50;
    } else if (units >= 400 && units < 600) {
        charge = units * 1.80;
    } else {
        charge = units * 2.00;
    }

    if (charge > 400) {
        surcharge = charge * 0.15;
    } else {
        surcharge = 100;
    }

    
    totalAmount = charge + surcharge;

    
    
    printf("%.2f
", totalAmount);

    return 0;
}
