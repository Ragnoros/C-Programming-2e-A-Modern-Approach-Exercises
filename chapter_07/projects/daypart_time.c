// Write a program that takes a 12 hour time input hour:minutes daypart (pm/am) in either uppercase or lowercase and prints it out.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char daypart1, daypart2;
    short hour, minute;

    printf("Please enter a time ( 23:59pm ): ");
    scanf("%2hi : %2hi %c%c", &hour, &minute, &daypart1, &daypart2);

    printf("%hi:%hi%c%c", hour, minute, daypart1, daypart2);

    return 0;
}