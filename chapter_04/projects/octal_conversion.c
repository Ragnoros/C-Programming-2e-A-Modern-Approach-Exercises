// Write a program that reads an integer entered by the user and displays it in octal (base 8)

#include <stdio.h>

int main(void)
{

    int num;
    int octal_con;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    printf("%d%d%d%d%d", ((((num / 8) / 8) / 8) / 8) % 8, (((num / 8) / 8) / 8) % 8, ((num / 8) / 8) % 8, (num / 8) % 8, num % 8);

    return 0;
}