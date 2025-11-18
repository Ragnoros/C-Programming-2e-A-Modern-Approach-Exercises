// write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added

#include <stdio.h>


int main(void)
{

    float pre_tax_amount;

    printf("Enter the amount: ");
    scanf("%f", &pre_tax_amount);

    printf("With tax added: %.2f", pre_tax_amount + (pre_tax_amount / 20));

    return 0;
}