// Write a program that asks the uer to enter two integers and finds their greatest common divisor.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int num1, num2, gcd;
    int mod;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

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

        mod = num1 % num2;
        num1 = num2;
        num2 = mod;
    }

    printf("The GCD is: %d", gcd);

    return 0;
}