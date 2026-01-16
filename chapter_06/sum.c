// Write a program that takes a series of numbers and sums them together.
// Chapter 07, modify the program so that it sums two double values.

#include <stdio.h>

int main(void)
{

    double num, sum = 0;

    while (num != 0)
    {
        printf("Please enter a number: ");
        scanf("%le", &num);

        sum += num;
        printf("Your current sum: %f\n", sum);
    }

    return 0;
}