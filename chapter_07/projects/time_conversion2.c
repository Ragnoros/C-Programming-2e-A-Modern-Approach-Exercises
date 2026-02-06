// Re-Write the time conversion program from chapter 05 so that it also accepts pm, am, p, a in either lowercase or uppercase. Turn 12 hour into 24 hour this time.

#include <stdio.h>

int main(void)
{

    char daypart = 0;
    int hour, min;

    printf("Please Enter a 24 hour time format time (23:59pm): ");
    scanf("%2d : %2d %c", &hour, &min, &daypart);

       printf("The 12 hour conversion is: %d:%d%c", hour, min, daypart);

    return 0;
}