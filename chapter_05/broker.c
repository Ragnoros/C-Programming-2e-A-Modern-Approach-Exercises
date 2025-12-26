// Write a program that calculates a brokers commission.

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool run = true;
    int cash_amount;
    float commission = 0;

    while (run)
    {
        printf("\nEnter value of trade: ");
        scanf(" %d", &cash_amount);

        if (!cash_amount)
            break;

        if (cash_amount < 2500)
        {
            commission += 30 + .017f * cash_amount;
        }
        else if (cash_amount < 6250)
        {
            commission += 56 + .0066f * cash_amount;
        }
        else if (cash_amount < 20000)
        {
            commission += 76 + .0034f * cash_amount;
        }
        else if (cash_amount < 50000)
        {
            commission += 100 + .0022f * cash_amount;
        }
        else if (cash_amount < 500000)
        {
            commission += 155 + .0011f * cash_amount;
        }
        else
        {
            commission += 255 + .0009 * cash_amount;
        }

        if (commission < 39.00f)
        {
            commission = 39.00f;
        }
    }

    printf("Commission: %.2f", commission);
    return 0;
}