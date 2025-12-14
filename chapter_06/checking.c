// Write a program that offers a text based menu for a checking balance program.

#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f, debit, credit;

    for (;;)
    {
        printf("0=Clear\t1=Credit\t2=Debit\t3=Balance\t4=Exit\n");
        scanf("%1d", &cmd);

        switch (cmd)
        {
        case 0:
            balance = 0;
            break;
        case 1:
            printf("Enter credit amount: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter credit amount: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 4:
            return 0;
        }
    }

    return 0;
}