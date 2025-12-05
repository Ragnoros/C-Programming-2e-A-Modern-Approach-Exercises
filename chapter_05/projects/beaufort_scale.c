// Write a program that asks the user to enter a wind speed in knots, then display the corresponding description.

#include <stdio.h>

int main(void)
{

    int knots;

    printf("Please enter the wind speed (knots): ");
    scanf("%d", &knots);

    if (knots < 1)
    {
        printf("Calm");
    }
    else if (knots < 4)
    {
        printf("Light air");
    }
    else if (knots < 27)
    {
        printf("Breeze");
    }
    else if (knots < 47)
    {
        printf("Gale");
    }
    else if (knots < 63)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }

    return 0;
}