// Write a program that takes a time in 24 hour format. the program then displays the departure and arival time of whichever departure is closest.

#include <stdio.h>

int main(void)
{

    int hour, min;
    int minute_conv;
    int dep1 = 8 * 60 + 0, dep2 = 9 * 60 + 43, dep3 = 11 * 60 + 19, dep4 = 12 * 60 + 47, dep5 = 14 * 60 + 0, dep6 = 15 * 60 + 45, dep7 = 19 * 60 + 0, dep8 = 21 * 60 + 45;
    int diff, current_diff, arriv_time;

    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &hour, &min);

    minute_conv = hour * 60 + min;
    diff = (minute_conv - dep1);
    arriv_time = dep1;

    if (diff < 0)
    {
        diff = diff * -1;
    }

    current_diff = (minute_conv - dep2);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep2;
    }

    current_diff = (minute_conv - dep3);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep3;
    }
    current_diff = (minute_conv - dep4);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep4;
    }
    current_diff = (minute_conv - dep5);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep5;
    }
    current_diff = (minute_conv - dep6);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep6;
    }
    current_diff = (minute_conv - dep7);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep7;
    }
    current_diff = (minute_conv - dep8);

    if (current_diff < 0)
    {
        current_diff = current_diff * -1;
    }
    if (current_diff < diff)
    {
        diff = current_diff;
        arriv_time = dep8;
    }

    switch ((arriv_time / 60))
    {
    case 8:
        printf("Departure Time: %.2d:%.2dam\nArrival Time: %.2d:%.2dam", 8, arriv_time % 60, 10, 16);
        break;
    case 9:
        printf("Departure Time: %.2d:%.2dam\nArrival Time: %.2d:%.2dam", 9, arriv_time % 60, 11, 52);
        break;
    case 11:
        printf("Departure Time: %.2d:%.2dam\nArrival Time: %.2d:%.2dpm", 11, arriv_time % 60, 13, 31);
        break;
    case 12:
        printf("Departure Time: %.2d:%.2dpm\nArrival Time: %.2d:%.2dpm", 12, arriv_time % 60, 15, 0);
        break;
    case 14:
        printf("Departure Time: %.2d:%.2dpm\nArrival Time: %.2d:%.2dpm", 14, arriv_time % 60, 16, 8);
        break;
    case 15:
        printf("Departure Time: %.2d:%.2dpm\nArrival Time: %.2d:%.2dpm", 15, arriv_time % 60, 17, 55);
        break;
    case 19:
        printf("Departure Time: %.2d:%.2dpm\nArrival Time: %.2d:%.2dpm", 19, arriv_time % 60, 21, 20);
        break;
    case 21:
        printf("Departure Time: %.2d:%.2dpm\nArrival Time: %.2d:%.2dpm", 21, arriv_time % 60, 11, 58);
        break;
    }

    return 0;
}
