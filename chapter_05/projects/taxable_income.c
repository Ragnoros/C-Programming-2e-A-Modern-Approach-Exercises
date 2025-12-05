// Write a program that asks a user to enter the amount of taxable income, then displays the tax due.

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter the taxable amount: ");
    scanf("%d", &amount);

    printf("Your taxable amount: $");
    if (amount < 750)
    {
        printf("%.2f", amount * (1.0f / 100.0f));
    }
    else if (amount < 2251)
    {
        printf("%.2f", 7.50f + ((amount - 750) * (2.0f / 100.0f)));
    }
    else if (amount < 3751)
    {
        printf("%.2f", 37.50f + ((amount - 2250) * (3.0f / 100.0f)));
    }
    else if (amount < 5251)
    {
        printf("%.2f", 82.50f + ((amount - 3750) * (4.0f / 100.0f)));
    }
    else if (amount < 7001)
    {
        printf("%.2f", 142.50f + ((amount - 5250) * (5.0f / 100.0f)));
    }
    else
    {
        printf("%.2f", 230.f + ((amount - 7000) * (6.0f / 100.0f)));
    }

    return 0;
}