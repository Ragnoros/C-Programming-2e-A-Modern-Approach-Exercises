// Write calls of printf that display a float variable x in the following formats
//      a) Exponential notation: left-justified in a field of size 8; one digit after the decimal point
//      b) Exponential notation: right-justified in a field of size 10; six digits after the decimal point
//      c) Fixed decimal notation: left-justified in a field of size 8; three digits after the deimal point
//      d) Fixed decimal notationL: right-justified in a field of size 6; no digits after the decimal point

#include <stdio.h>

int main(void)
{

    float x = 12.4533;

    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x); // 2 white space after
    printf("%6.0f\n", x);  // 4 leading white space

    return 0;
}