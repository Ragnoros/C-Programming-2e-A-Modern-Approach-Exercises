// Write a program that finds the largest number in a series of numbers entered by the user.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool run = true;
    int current_num, largest = 0;

    while (run)
    {
        printf("\nPlease Enter a number: ");
        scanf("%d", &current_num);

        if (!current_num)
        {
            run = false;
        }

        if (current_num > largest)
        {
            largest = current_num;
        }

        printf("\nCurrent Largest: %d", largest);
    }

    return 0;
}