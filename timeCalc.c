#include <stdio.h>

int main(){
  double mins;
  double minYear;
  double year;
  double days;

  printf("Please enter the amount of mins: \n");
  scanf("%lf", &mins);

  minYear = mins/525600;
  printf("%.0f mins are %f in years \n",mins, minYear);
  
  days = mins/1440;
  printf("%.0f mins are %f in days\n", mins, days);


  return 0;
}
