// Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.

#include <stdio.h>

int main(void)
{

    int num;
    int digit1, digit2, digit3;

    printf("First method - enter a three-digit number: ");
    scanf("%d", &num);

    printf("%d%d%d\n", num % 10, (num / 10) % 10, num / 100);

    printf("Second method - enter a three-digit number: ");
    scanf("%1d %1d %1d", &digit1, &digit2, &digit3);

    printf("%d%d%d", digit3, digit2, digit1);

    return 0;
}