// Write a program that computes a universal product code check digit

#include <stdio.h>

int main(void)
{

    int type;
    int man1, man2, man3, man4, man5;
    int prod1, prod2, prod3, prod4, prod5;
    int calculation;

    printf("Enter the first 11 digit of a UPC: ");
    scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &type, &man1, &man2, &man3, &man4, &man5, &prod1, &prod2, &prod3, &prod4, &prod5);

    calculation = 9 - (((((type + man2 + man4 + prod1 + prod3 + prod5) * 3) + (man1 + man3 + man5 + prod2 + prod4)) - 1) % 10);

    printf("Check digit: %d", calculation);

    return 0;
}