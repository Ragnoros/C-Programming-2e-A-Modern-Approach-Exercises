// General purpose test file to test code snippets from the book.
// Expect this code to change a lot.

#include <stdio.h>

int main(void)
{

    int i;
    float y;
    float x;

    scanf("%f%d%f", &x, &i, &y);
    printf("%.1f\n%d\n%.1f", x, i, y);

    return 0;
}