// Write a program that prints various sizeof types.
#include <stdio.h>

int main(void)
{

    printf("Char:\t\t%ld\n", sizeof(char));
    printf("Int:\t\t%ld\n", sizeof(int));
    printf("Short:\t\t%ld\n", sizeof(short));
    printf("Long:\t\t%ld\n", sizeof(long));
    printf("Float:\t\t%ld\n", sizeof(float));
    printf("Double:\t\t%ld\n", sizeof(double));
    printf("Long Double:\t%ld\n", sizeof(long double));

    return 0;
}