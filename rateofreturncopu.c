*
* Author: Sifat Syed
* Date: September 02, 2018
*
* This program calculates the compound
* annual growth rate using the formula
* ((v1/v0)^(1/t)) - 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double initialValue, numberOfYears, finalValue, annualizedReturnRate,
  investmentGrowth, yearsInverse;

  printf("Enter the initial value of investment\n");
  scanf("%lf", &initialValue);

  printf("Enter the final value of investment\n");
  scanf("%lf", &finalValue);

  printf("Enter the number of years\n");
  scanf("%lf", &numberOfYears);

  investmentGrowth = (finalValue/initialValue);
  yearsInverse= (1/numberOfYears);
  annualizedReturnRate = ((pow(investmentGrowth, yearsInverse)) - 1) * 100;

  printf("Initial Value:%.2f\n", initialValue);
  printf("Final Value  :%.2f\n", finalValue);
  printf("Years:  %.2f\n",numberOfYears);
  printf("Annualized Rate of Return: %f %\n", annualizedReturnRate);

  return 0;

}