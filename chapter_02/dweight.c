#include <stdio.h>

#define INCHES_PER_POUND 166


int main(void)
{
    int height = 12, length = 10, width = 8, volume;

    volume = height * length * width;
    

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / 166);

    return 0;

}