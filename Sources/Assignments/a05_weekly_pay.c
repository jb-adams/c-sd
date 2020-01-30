/*
 * Purpose: calculate the user's weekly pay
 * Author: Jeremy Adams
 * Date: 2020
 */

#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define OTRATE 18.00
#define OT 40
#define TAXRATE_LOW 0.15
#define TAXRATE_MID 0.20
#define TAXRATE_HIGH 0.25
#define INCOME_MID 300.00
#define INCOME_HIGH 450.00

int main() {

    int totalHours;

    printf("Enter the number of hours worked last week: ");
    scanf("%d", &totalHours);

    int basicHours = totalHours > OT ? OT : totalHours;
    int overtimeHours = totalHours > OT ? totalHours - OT : 0;
    double grossPay = (basicHours * PAYRATE) +
                      (overtimeHours * OTRATE);
    
    printf("You worked %d hours\n", totalHours);
    printf("Your gross pay was %.2f\n", grossPay);
    
    double taxablePay = grossPay;
    double totalTaxDeducted = 0.0;

    // tax high income
    if (taxablePay > INCOME_HIGH) {
        double toTax = taxablePay - INCOME_HIGH;
        double taxRate = TAXRATE_HIGH;
        double taxDeducted = toTax * taxRate;
        totalTaxDeducted += taxDeducted;
        taxablePay -= toTax;
    }

    // tax mid income
    if (taxablePay > INCOME_MID) {
        double toTax = taxablePay - INCOME_MID;
        double taxRate = TAXRATE_MID;
        double taxDeducted = toTax * taxRate;
        totalTaxDeducted += taxDeducted;
        taxablePay -= toTax;
    }

    // tax low income
    double toTax = taxablePay;
    double taxRate = TAXRATE_LOW;
    double taxDeducted = toTax * taxRate;
    totalTaxDeducted += taxDeducted;
    taxablePay -= toTax;
    
    printf("Your tax deductions were %.2f\n", totalTaxDeducted);
    printf("Your net pay was %.2f\n", grossPay - totalTaxDeducted);
}
