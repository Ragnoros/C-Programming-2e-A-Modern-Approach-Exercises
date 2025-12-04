// General purpose test file to test code snippets from the book.
// Expect this code to change a lot.

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int code = 1;
    switch (code)
    {
    case 229:
        printf("Albany");
        break;
    case 404:
    case 470:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    default:
        printf("Area code not recognized");
    }

    return 0;
}