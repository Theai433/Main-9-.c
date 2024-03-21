//C program to calculate the electricity bill of given customer based on the units consumed:


#include<stdio.h>

int main() {
    int customerId;
    char customerName[50];
    int unitConsumed;
    float chargesPerUnit;
    float totalBill;

    // Prompt the user to enter CustomerID, CustomerName, and UnitConsumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    // Use if..else statement to check the given conditions and apply necessary calculations
    if (unitConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitConsumed <= 600) {
        chargesPerUnit = 200;
    } else if (unitConsumed <= 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculate total bill
    totalBill = unitConsumed * chargesPerUnit;

    // Apply surcharge if bill exceeds Kshs. 500
    if (totalBill > 500) {
        totalBill += totalBill * 0.20; // Add 20% surcharge
    }

    // Ensure the minimum bill is Kshs. 200
    if (totalBill < 200) {
        totalBill = 200;
    }

    // Display the output
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);

    return 0;
}


