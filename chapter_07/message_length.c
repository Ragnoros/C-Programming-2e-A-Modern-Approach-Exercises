// Write a small program that determines the length of a message

#include <stdio.h>

int main(void)
{

    int msgCount = 0;
    while (getchar() != ' ')
    {
        msgCount++;
    }

    printf("Your message is %d character(s)", msgCount);

    return 0;
}