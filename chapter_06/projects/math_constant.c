// The value of the mathematical constant e can be expressed as an infinite series:
//              e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
// Write a program that approximates e by computing the value of
//              1 + 1/1! + 1/2! + 1/3! + ... !/n!
// Where n is an integer entered by the user

#include <stdio.h>

int main(void)
{

    float term = 1.0f;
    float factoral = 1.00f;
    float epsilon;
    float expression = 1.00f;

    printf("Please enter epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 1; term >= epsilon; i++)
    {
        factoral *= i;
        term = 1.0f / factoral;
        expression += term;
    }

    printf("%f", expression);

    return 0;
}