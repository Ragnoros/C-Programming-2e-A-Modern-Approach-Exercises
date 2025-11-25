// Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement followed by the sum of the rows, columns and diagonals

#include <stdio.h>

int main(void)
{
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, dig12, dig13, dig14, dig15, dig16;

    int row1, row2, row3, row4;

    int col1, col2, col3, col4;

    int diagonal_sum1, diagonal_sum2;

    printf("Enter the numbers from 1-16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11, &dig12, &dig13, &dig14, &dig15, &dig16);

    row1 = dig1 + dig2 + dig3 + dig4, row2 = dig5 + dig6 + dig7 + dig8, row3 = dig9 + dig10 + dig11 + dig12, row4 = dig13 + dig14 + dig15 + dig16;
    col1 = dig1 + dig5 + dig9 + dig13, col2 = dig2 + dig6 + dig10 + dig14, col3 = dig3 + dig7 + dig11 + dig15, col4 = dig4 + dig8 + dig12 + dig16;
    diagonal_sum1 = dig1 + dig6 + dig11 + dig16, diagonal_sum2 = dig4 + dig7 + dig10 + dig13;

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, dig12, dig13, dig14, dig15, dig16);

    printf("Row sum: %d %d %d %d\nColumn sum: %d %d %d %d\nDiagonal sum: %d %d", row1, row2, row3, row4, col1, col2, col3, col4, diagonal_sum1, diagonal_sum2);

    return 0;
}