// Write a program that translates an alpabetic phone number into numeric form

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int phone = 0;
    char ch;
    bool run = true;
    while (run)
    {
        ch = getchar();
        ch = toupper(ch);

        switch (ch)
        {
        case 'A':
        case 'B':
        case 'C':
            phone = (phone * 10) + 2;
            break;
        case 'D':
        case 'E':
        case 'F':
            printf("test");
            phone = (phone * 10) + 3;
            break;
        case 'G':
        case 'H':
        case 'I':
            phone = (phone * 10) + 4;
            break;
        case 'J':
        case 'K':
        case 'L':
            phone = (phone * 10) + 5;
            break;
        case 'M':
        case 'N':
        case 'O':
            phone = (phone * 10) + 6;
            break;
        case 'P':
        case 'R':
        case 'S':
            phone = (phone * 10) + 7;
            break;
        case 'T':
        case 'U':
        case 'V':
            phone = (phone * 10) + 8;
            break;
        case 'W':
        case 'X':
        case 'Y':
            phone = (phone * 10) + 9;
            break;
             };

        if (ch == ' ')
        {
            break;
        }
    }
    printf("%d", phone);
    return 0;
}