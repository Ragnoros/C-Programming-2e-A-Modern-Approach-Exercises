// Write a program that formats product information entered by the user.
// The item number and date should be left justifed; the unit price should be right justified. Allow dollar amounts up to $9999.99

#include <stdio.h>

int main(void)
{

    int item;
    float price;
    int month, day, year;

    printf("Enter item numer: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%-d\t$%8.2f\t%-d/%-d/%-d\n", item, price, month, day, year);

    return 0;
}