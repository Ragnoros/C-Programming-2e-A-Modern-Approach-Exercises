// Write a program that takes a fraction from the user and turns it into its lowest form

#include <stdio.h>

int main(void)
{

    int num, denom, num1, num2, temp, gcd;

    printf("Please enter your fraction ( 1/2 ): ");
    scanf("%d / %d", &num, &denom);

    num1 = num;
    num2 = denom;

    while (1)
    {
        if (!num1)
        {
            gcd = num2;
            break;
        }
        else if (!num2)
        {
            gcd = num1;
            break;
        }

        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    printf("%d/%d", num / gcd, denom / gcd);

    return 0;
}