// Write a program that takes a 12 hour time input hour:minutes daypart (pm/am) in either uppercase or lowercase and prints it out.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char daypart, hour, minute;

    printf("Please enter a time ( 23:59pm ): ");
    scanf("%2d : %2d %c", &hour, &minute, &daypart);

    daypart = toupper(daypart);

    printf("%d:%d%c", hour, minute, daypart);

    return 0;
}