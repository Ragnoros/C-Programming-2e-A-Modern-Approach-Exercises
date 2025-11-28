// General purpose test file to test code snippets from the book.
// Expect this code to change a lot.

#include <stdio.h>

int main(void)
{

    int i = 7, j, k;
    j = 3 + --i * 2;

    printf("%d %d \n", i, j);

    return 0;
}