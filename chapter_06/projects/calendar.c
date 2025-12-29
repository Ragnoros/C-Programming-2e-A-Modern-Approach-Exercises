// Write a program that prints a calendar based on two inputs from the user. The
// number of days and the day in which the month starts.

#include <stdbool.h>
#include <stdio.h>

int main(void) {

  int days, daystart;

  printf("\nPlease enter the number of days: ");
  scanf("%d", &days);

  printf("\nPlease enter the starting day (1=Sun 7=Sat): ");
  scanf("%d", &daystart);

  if (days >= 1 && days <= 31 && daystart >= 1 && daystart <= 7) {
    for (int i = 1; i <= days; i++) {

      printf("%.2d ", i);
      if (i % 7 == 0) {
        printf("\n");
      }
    }
  }
  printf("\n");
  return 0;
}