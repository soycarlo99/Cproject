#include <stdio.h>

int main(){
  double c;
  //double f = 33.8;
  double result;

  printf("Welcome to my temp calucation application, it costs 50000€ to purchase!\n");
  printf("Please enter your bank card information: CARD NUMBER: CVV: Card holder name: !\n");
  printf("Plase enter your temp in Celcius: ");
  scanf("%lf", &c);


  result = (c*9/5)+32;

  printf("in F it is going to be: %.2f Farenheit\n", result);
}
