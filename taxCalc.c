#include <stdio.h>

int main(){
  double rate = 12.00;
  double OBrate = 18.00;
  double hoursWorked;
  double gross = 0;
  double remainder = 0;
  double netPay = 0; 

  
  printf("How many hours have you worked?\n");
  scanf("%lf", &hoursWorked);
  
  if (hoursWorked>40){
    double remainder = hoursWorked - 40; 
    gross = (rate*40) + (OBrate*remainder);
  } else if (hoursWorked<40){
    gross = rate*hoursWorked;
  }

  printf("Salary before tax: %.2lf\n", gross);
  
  if (gross<=300){
    netPay = (gross * 0.85);
  } else if(gross<=450){
    netPay = (gross * 0.85) + ((gross -300) * 0.80);
  } else {
    netPay = (300 * 0.85) + (150 * 0.80) + ((gross - 450) * 0.75);
  }

  printf("Your net pay is: %.2lf\n", netPay);
  return 0;
}
