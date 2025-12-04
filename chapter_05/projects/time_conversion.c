// Write a program that takes a 24 hour time and converts it into 12 hour form.

#include <stdio.h>

int main(void)
{
    int hour24, min;
    int hour12;

    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &hour24, &min);

    // I only need to convert anything past 12.
    switch (hour24)
    {
    case 24:
        hour12 = 12;
        // Set hour 24 to 1 for the condition checker AM vs PM
        hour24 = 1;
        break;
    case 23:
        hour12 = 11;
        break;
    case 22:
        hour12 = 10;
        break;
    case 21:
        hour12 = 9;
        break;
    case 20:
        hour12 = 8;
        break;
    case 19:
        hour12 = 7;
        break;
    case 18:
        hour12 = 6;
        break;
    case 17:
        hour12 = 5;
        break;
    case 16:
        hour12 = 4;
        break;
    case 15:
        hour12 = 3;
        break;
    case 14:
        hour12 = 2;
        break;
    case 13:
        hour12 = 1;
        break;
    default:
        // If its 12 or below no need for conversion
        hour12 = hour24;
        break;
    }

    printf("Equivalent 12 hour time: %.2d:%.2d", hour12, min);
    if (hour24 > 11)
    {
        printf("PM");
    }
    else
    {
        printf("AM");
    }

    return 0;
}