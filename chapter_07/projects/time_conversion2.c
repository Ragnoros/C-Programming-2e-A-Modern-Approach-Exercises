// Re-Write the time conversion program from chapter 05 so that it also accepts pm, am, p, a in either lowercase or uppercase. Turn 12 hour into 24 hour this time.

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char daypart1, daypart2;
    int hour, min;

    printf("Please Enter a 12 hour time format time (1:59pm): ");
    scanf("%2d : %2d %c%c", &hour, &min, &daypart1, &daypart2);

    if (toupper(daypart1) == 'P' && hour != 12)
    {
        hour += 12;
    }
    else if (hour == 12 && toupper(daypart1) == 'A')
    {
        hour = 0;
    }

    printf("%.2d:%.2d%c%c", hour, min, daypart1, daypart2);

    return 0;
}