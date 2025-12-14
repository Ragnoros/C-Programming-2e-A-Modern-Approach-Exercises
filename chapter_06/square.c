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

    for (int i = 5; i > 0; i--)
    {
        printf("%d\t%d\n", num, num * num);

        num++;
    }

    return 0;
}