// Write a program that counts the digits in a number

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf(" %d", &num);

    if (num < 10)
    {
        printf("The numnber %d has 1 digit", num);
    }
    else if (num < 100)
    {
        printf("The numer %d has 2 digits", num);
    }
    else if (num < 1000)
    {
        printf("The numer %d has 3 digits", num);
    }
    else
    {
        printf("I'm not counting digits any further");
    }
    return 0;
}