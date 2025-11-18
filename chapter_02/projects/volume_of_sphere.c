// Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr3
// Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
// Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r3
// Upgrade the program to take an input

#include <stdio.h>

#define PI 3.14159265359f
#define FOUR_DIVIDED_THREE (4.0f / 3.0f)

int main(void)
{

    float radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Volume: %.1f", radius * radius * radius * PI * FOUR_DIVIDED_THREE);

    return 0;
}