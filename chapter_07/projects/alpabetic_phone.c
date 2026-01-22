// Write a program that translates an alpabetic phone number into numeric form

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int phone = 0;
    char ch;
    bool run = true;
    printf("Enter phone number: ");
    do
    {
        ch = getchar();
        ch = toupper(ch);

        switch (ch)
        {
        case '\n':
            run = false;
            break;
        case '-':
            putchar('-');
            break;
        case 'A':
        case 'B':
        case 'C':
            putchar('2');
            break;
        case 'D':
        case 'E':
        case 'F':
            putchar('3');
            break;
        case 'G':
        case 'H':
        case 'I':
            putchar('4');
            break;
        case 'J':
        case 'K':
        case 'L':
            putchar('5');
            break;
        case 'M':
        case 'N':
        case 'O':
            putchar('6');
            break;
        case 'P':
        case 'R':
        case 'S':
            putchar('7');
            break;
        case 'T':
        case 'U':
        case 'V':
            putchar('8');
            break;
        case 'W':
        case 'X':
        case 'Y':
            putchar('9');
            break;
        default:
            putchar(ch);
            break;
        }

    } while (run);
    printf("\n");
    return 0;
}