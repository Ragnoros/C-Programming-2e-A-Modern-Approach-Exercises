// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx

#include <stdio.h>

int main(void)
{

    int split1, split2, split3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("( %d ) %d-%d", &split1, &split2, &split3);

    printf("You entered %d.%d.%d", split1, split2, split3);

    return 0;
}