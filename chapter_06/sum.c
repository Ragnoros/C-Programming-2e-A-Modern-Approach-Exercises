// Write a program that takes a series of numbers and sums them together.

#include <stdio.h>

int main(void)
{

    long num, sum = 0;

    while (num != 0)
    {
        printf("Please enter a number: ");
        scanf("%ld", &num);

        sum += num;
        printf("Your current sum: %ld\n", sum);
    }

    return 0;
}