// Write a program that prints a table of squares based on an input from the user
#include <stdio.h>

int main(void)
{

    int num;
    int i = 5;

    printf("Please Enter a number: ");
    scanf("%d", &num);

    while (i > 0)
    {
        printf("%d\t%d\n", num, num * num);

        num++;
        i--;
    }

    return 0;
}