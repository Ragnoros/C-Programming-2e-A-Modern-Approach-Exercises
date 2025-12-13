// Write a program that takes a series of numbers and sums them together.

#include <stdio.h>

int main(void)
{

    int num, sum = 0;

    while (num != 0)
    {
        printf("Please enter a number: ");
        scanf("%d", &num);

        sum += num;
        printf("Your current sum: %d\n", sum);
    }

    return 0;
}