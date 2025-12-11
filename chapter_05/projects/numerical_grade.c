// Write a program that converts a numerical grade into a letter grade

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100)
    {
        printf("Please enter a number between 0-100");
        return 0;
    }

    grade = grade / 10;

    switch (grade)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }

    return 0;
}