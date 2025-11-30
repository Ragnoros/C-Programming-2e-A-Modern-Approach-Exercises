//  Write a program that gets the check digit from a European Article Number

#include <stdio.h>

int main(void)
{

    int dig12, dig11, dig10, dig9, dig8, dig7, dig6, dig5, dig4, dig3, dig2, dig1;
    int sum1, sum2, total;

    printf("Please enter the EAN: ");
    scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11, &dig12);

    sum1 = (dig2 + dig4 + dig6 + dig8 + dig10 + dig12) * 3;
    sum2 = (dig1 + dig3 + dig5 + dig7 + dig9 + dig11);
    total = sum1 + sum2;

    printf("Check digit: %d", 9 - (--total) % 10);

    return 0;
}