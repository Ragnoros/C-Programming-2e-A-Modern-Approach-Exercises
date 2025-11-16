#include <stdio.h>

#define INCHES_PER_POUND 166


int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter Height of the Box: ");
    scanf("%d", &height);
    printf("Enter Length of the Box: ");
    scanf("%d", &length);
    printf("Enter Width of the Box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}