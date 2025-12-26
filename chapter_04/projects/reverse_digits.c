// Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.

#include <stdio.h>

int main(void)
{

    int num, num_reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {

        num_reverse = (num_reverse * 10) + (num % 10);
        num /= 10;

    } while (num);

    printf("%d", num_reverse);

    return 0;
}