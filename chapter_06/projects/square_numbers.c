// Write a program that takes an integer of a number and prints all even square numbers between 1 and n

#include <stdio.h>

int main(void)
{

    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d\n", i * i);
        }
    }

    return 0;
}