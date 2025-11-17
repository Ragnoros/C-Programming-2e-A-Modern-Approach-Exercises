//Write a program that declares several int and float variables--without initialising them--and then print their values
//Is there any pattern to the values (Usually there isn't.)

#include <stdio.h>


int main(void)
{

    float f1, f2, f3, f4, f5;
    int i1, i2, i3, i4, i5;

    

    printf("Floats: %.2f, %.2f, %.2f, %.2f, %.2f\n", f1, f2, f3, f4, f5);
    printf("Ints: %d, %d, %d, %.d, %d\n", i1, i2, i3, i4, i5);

    return 0;
}