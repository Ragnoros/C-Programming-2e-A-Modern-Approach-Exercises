// Write a program that calculates the remaining balance on a loan after the first, second and third monthly payments

#include <stdio.h>


int main(void)
{
    
    float loan_amount;
    float interest_rate;
    float monthly_payments;
    float balance;
    float monthly_interest;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payments: ");
    scanf("%f", &monthly_payments);


    monthly_interest = (interest_rate / 100) / 12; 
    balance = (loan_amount - monthly_payments) + (loan_amount * monthly_interest);

    printf("Balance remaining after first payment: %.2f\n", balance);
    balance = (balance - monthly_payments) + (balance * monthly_interest);
    printf("Balance remaining after second payment %.2f\n", balance);
    balance = (balance - monthly_payments) + (balance * monthly_interest);
    printf("Balance remaining after third payment %.2f\n", balance);

    return 0;
}