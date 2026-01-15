// Write a program that prints a table of squares based on an input from the user
// Chapter 07 updates: Modify the program using different data types and implementing loop conditions using getchar()

#include <stdio.h>

int main(void)
{

    long num;
    char loopCount = 0;

    printf("Please Enter a number: ");
    scanf("%ld", &num);

    for (long i = 0; i > 0; i--)
    {
        if (loopCount == 24)
        {
            printf("Press Enter to continue...\n");
            while (getchar() != '\n')
                ;
            loopCount = 0;
        }

        printf("%ld\t%ld\n", num, num * num);

        num++;
        loopCount++;
    }

    return 0;
}