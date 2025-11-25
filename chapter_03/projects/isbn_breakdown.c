// Write a program that breaks down an ISBN entered by the user.

#include <stdio.h>

int main(void)
{

    int gsi, group, publisher, item, check;

    printf("Please enter the ISBN: ");
    scanf("%d - %d - %d - %d - %d", &gsi, &group, &publisher, &item, &check);

    printf("GSI prefix: %d\nGroup identifer: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi, group, publisher, item, check);

    return 0;
}