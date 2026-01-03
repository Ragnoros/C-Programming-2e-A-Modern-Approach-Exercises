// Write a program that takes two dates from a user in mm/dd/yy format and evaluates which is earlier.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int month, day, year, date_conv, earliest = 0;
    bool run = true;

    while (run)
    {
        printf("Please enter a date to compare (0/0/0 to exit): ");
        scanf("%d / %d / %d", &month, &day, &year);

        if (!month && !day && !year)
        {
            run = false;
            break;
        }

        if (!earliest)
        {
            earliest = (year * 10000) + (month * 100) + day;
        }
        else
        {
            date_conv = (year * 10000) + (month * 100) + day;
        }

        if (date_conv < earliest)
        {
            earliest = date_conv;
        }
    }

    printf("The earliest date is: %d", earliest);

    return 0;
}