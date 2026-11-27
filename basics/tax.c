/* Write a program that asks the user to enter a dollars-and-cents amount, then displays the
amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00*/

#include <stdio.h>

int main(void){
  float amount;
  int tax = 5;

  printf("Enter an amount: $");
  scanf(" %f",&amount);

  float tax_add = (tax / 100.0f) * amount;
  float answer =  amount + tax_add;

  printf("With tax added: $%.2f",answer);
  return 0 ;
}
