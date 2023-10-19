#include <stdio.h>

int main() {
    int units;
    float unitPrice, bill, surcharge;
scanf("%d",&units);
    
    
    

    
    if (units < 200)
        unitPrice = 1.20;
    else if (units>200&&units < 400)
        unitPrice = 1.40;
    else if (units>399&&units < 600)
        unitPrice = 1.60;
    else if (units>599&&units < 800)
        unitPrice = 1.80;
    else
        unitPrice = 2.00;
        
    bill = units * unitPrice;

    
    if (units > 400)
        surcharge = 0.15 * bill;
    else
        surcharge = 0.0;

   
    

    
    printf("Units Consumed: %d
", units);
    printf("Cost per Unit: %.2f
", unitPrice);
    printf("Bill: %.2f
", bill);
    printf("Surcharge: %.2f
", surcharge);
printf("Total Amount: %.2f
",bill+surcharge);
    
}
