// Write a program that calculates the remaining balance on a loan after the first, second and third monthly payments

#include <stdio.h>

int main(void)
{

    float loan_amount, balance, monthly_payments, interest_rate, monthly_interest;
    int number_of_payments, payment = 0;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payments: ");
    scanf("%f", &monthly_payments);

    printf("Enter number of payments: ");
    scanf("%d", &number_of_payments);

    monthly_interest = (interest_rate / 100) / 12;

    for (int i = 0; i < number_of_payments; i++)
    {
        if (!i)
        {

            balance = (loan_amount - monthly_payments) + (loan_amount * monthly_interest);
        }
        else
        {
            balance = (balance - monthly_payments) + (balance * monthly_interest);
        }

        printf("Balance remaining after %d payment(s): %.2f\n", ++payment, balance);
    }

    return 0;
}