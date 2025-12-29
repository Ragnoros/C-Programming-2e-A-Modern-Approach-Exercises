// Write a program that prints a calendar based on two inputs from the user. The number of days and the day in which the month starts.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int days, daystart;
    bool run = true;

    while (run)
    {
        printf("\nPlease enter the number of days: ");
        scanf("%d", &days);

        printf("\nPlease enter the starting day (1=Sun 7=Sat): ");
        scanf("%d", &daystart);

        if (days >= 1 && days <= 31 && daystart >= 1 && daystart <= 7)
        {
        }
    }

    return 0;
}