// Write a program that improves upon chapter 03 addfrac and allows you to use *, /, +, -.

#include <stdio.h>

int main(void)
{

    int numer1, numer2, denom1, denom2, result_num, result_denom, gcd, num1, num2, mod;
    char operator;

    printf("Please enter fractions: ");
    scanf("%d / %d %c %d / %d", &numer1, &denom1, &operator, &numer2, &denom2);

    if (denom1 == 0 || denom2 == 0)
    {
        printf("Please enter a valid fraction");
        return 0;
    }

    switch (operator)
    {
    case '+':
        result_num = numer1 * denom2 + numer2 * denom1;
        result_denom = denom1 * denom2;
        break;
    case '*':
        result_num = numer1 * numer2;
        result_denom = denom1 * denom2;
        break;
    case '/':
        result_num = numer1 * denom2;
        result_denom = denom1 * numer2;
        break;
    case '-':
        result_num = numer1 * denom2 - numer2 * denom1;
        result_denom = denom1 * denom2;
        break;
    default:
        printf("Please enter a valid operator");
        return 0;
    }

    num1 = result_num;
    num2 = result_denom;

    while (1)
    {

        if (!num1)
        {
            gcd = num2;
            break;
        }
        else if (!num2)
        {
            gcd = num1;
            break;
        }

        mod = num1 % num2;
        num1 = num2;
        num2 = mod;
    }

    result_num /= gcd;
    result_denom /= gcd;

    if (result_denom == 1)
    {
        printf("The answer is:\t%d", result_num);
    }
    else
    {
        printf("The answer is:\t%d/%d", result_num, result_denom);
    }

    return 0;
}