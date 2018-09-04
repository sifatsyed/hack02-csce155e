/*
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

  double initialValue, numberOfYears, numberOfWeeks, numberOfDays, finalValue, annualizedReturnRate,
  investmentGrowth, yearsInverse, weeksInYears, daysInYears, totalYears;

  printf("Enter the initial value of investment\n");
  scanf("%lf", &initialValue);

  printf("Enter the final value of investment\n");
  scanf("%lf", &finalValue);

  printf("Enter the number of years:\n");
  scanf("%lf", &numberOfYears);
  
  printf("Enter the number of weeks:\n");
  scanf("%lf", &numberOfWeeks);
  
    weeksInYears = numberOfWeeks/52.1429;
  
  printf("Enter the number of days:\n");
  scanf("%lf", &numberOfDays);
  
    daysInYears = numberOfDays/365;
	
	  totalYears =  numberOfYears + weeksInYears + daysInYears;

  investmentGrowth = (finalValue/initialValue);
  yearsInverse= (1/totalYears);
  annualizedReturnRate = (pow(investmentGrowth, yearsInverse) - 1) * 100;

  printf("Initial Value: $%.2f\n", initialValue);
  printf("Final Value:   $%.2f\n", finalValue);
  printf("Years:          %.2f\n",totalYears);
  printf("Annualized Rate of Return: %f%\n", annualizedReturnRate );

  return 0;

}