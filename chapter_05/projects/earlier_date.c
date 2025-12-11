// Write a program that takes two dates from a user in mm/dd/yy format and evaluates which is earlier.

#include <stdio.h>

int main(void)
{

    int mon1, day1, year1;
    int mon2, day2, year2;
    int date1_conv, date2_conv;

    printf("Please Enter the first date: ");
    scanf("%d / %d / %d", &mon1, &day1, &year1);

    printf("Please Enter the second date: ");
    scanf("%d / %d / %d", &mon2, &day2, &year2);

    date1_conv = (year1 * 10000) + (mon1 * 100) + day1;
    date2_conv = (year2 * 10000) + (mon2 * 100) + day2;

    if (date1_conv == date2_conv)
    {
        printf("%02d/%02d/%02d and %02d/%02d/%02d are the same date", mon1, day1, year1, mon2, day2, year2);
    }

    if (date1_conv < date2_conv)
    {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon1, day1, year1, mon2, day2, year2);
    }
    else if (date2_conv < date1_conv)
    {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon2, day2, year2, mon1, day1, year1);
    }

    return 0;
}