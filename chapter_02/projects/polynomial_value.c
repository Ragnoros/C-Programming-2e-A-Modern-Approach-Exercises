// Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
//
//              3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
//
//  Modify the program of programming project 5 so that the polynomial is evaluated using the following formula:
//              
//              OLD: (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6)
//              NEW: (((( 3x + 2 ) x - 5 ) x - 1 ) x + 7 ) x - 6


#include <stdio.h>

int main(void)
{

    int x;

    printf("Please Enter the value of X: ");
    scanf("%d", &x);

    int polynomial_value = ((((( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6);

    printf("Here is the polynominal value: %d", polynomial_value);


    return 0;
}