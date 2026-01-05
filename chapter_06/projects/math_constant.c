// The value of the mathematical constant e can be expressed as an infinite series:
//              e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
// Write a program that approximates e by computing the value of
//              1 + 1/1! + 1/2! + 1/3! + ... !/n!
// Where n is an integer entered by the user

#include <stdio.h>

int main(void)
{

    float n;
    float expression = 1.00f;
    float factoral = 1.00f;

    printf("Please enter a number: ");
    scanf("%f", &n);

    for (int i = 1; factoral > n; i++)
    {
        factoral /= i;
        expression += 1.00f / factoral;
    }

    printf("%f", expression);

    return 0;
}