// Write a program that finds the largest and smallest of four integers entered by the user

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    int smallest, largest;

    printf("Enter 4 integer values: ");
    scanf("%d %d %d %d:", &num1, &num2, &num3, &num4);

    smallest = num1;
    largest = num1;

    if (smallest > num2)
    {
        smallest = num2;
        largest = largest < num3 ? num3 : largest < num4 ? num4
                                                         : largest;
    }
    else if (smallest > num3)
    {
        smallest = num3;
        largest = largest < num4 ? num4 : largest;
    }
    else if (smallest > num4)
    {
        smallest = num4;
    }

    printf("Largest %d\nSmallest %d", largest, smallest);

    return 0;
}