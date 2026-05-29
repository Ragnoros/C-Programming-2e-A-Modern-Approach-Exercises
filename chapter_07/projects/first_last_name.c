// Write a program takes a first name and last name entered by the user and displays the last name, a comma, and the first initial.
// followed by a period

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{

    char name, last_name, initial;
    short count = 0;
    bool space_check = false;

    while ((name = getchar()) != EOF && name != '\n')
    {
        ++count;
        if (count == 1)
        {
            initial = name;
        }
        if (name == ' ')
        {
            space_check = true;
        }
        if (space_check)
        {
            last_name = getchar();
            break;
        }
    }
    printf("%c, %c.", last_name, initial);

    return 0;
}
