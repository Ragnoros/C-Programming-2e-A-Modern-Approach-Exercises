// Write a program that counts the number of digits in an integer value

#include <stdio.h>

int main(void)
{
    int num, count = 0;

    printf("Enter an integer value: ");
    scanf("%d", &num);

    do
    {
        num /= 10;
        count++;

    } while (num > 0);

    printf("Number of digits: %d", count);

    return 0;
}