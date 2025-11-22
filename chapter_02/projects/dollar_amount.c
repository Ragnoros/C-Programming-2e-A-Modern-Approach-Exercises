// Write a program that asks the user to enter a U.S. Dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, $1

#include <stdio.h>


int main(void)
{
    float dollar_amount;
    int twenty, ten, five, one;
    int rounded_amount;

    printf("Please enter a dollar amount: ");
    scanf("%f", &dollar_amount);

    rounded_amount = dollar_amount;
    twenty = rounded_amount / 20;
    rounded_amount = rounded_amount - (20 * twenty );
    ten = rounded_amount / 10;
    rounded_amount = rounded_amount - (10 * ten);
    five = rounded_amount / 5;
    rounded_amount = rounded_amount - (5 * five);
    one = rounded_amount / 1;

    printf("# of Twenty Bills: %d\n# of Ten Bills: %d\n# of Five Bills: %d\n# of One Bills: %d", twenty, ten, five, one);


    return 0;
}